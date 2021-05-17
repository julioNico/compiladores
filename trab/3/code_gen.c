#include "code_gen.h"

const char *jasmin_start = R"(
.class public Code
.super java/lang/Object
.method public static main([Ljava/lang/String;)V
    .limit locals 50
    .limit stack 50
)";

const char *print_jasmin = R"(
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc "HelloWord JASMIN"
    invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
)";

const char *jasmin_end = R"(
    ; getstatic java/lang/System/out Ljava/io/PrintStream;
    ; aload 0
    ; invokevirtual java/io/PrintStream/println(Ljava/lang/Object;)V
    return	
.end method
)";

typedef struct
{
    char *nome;
    char *valor;
} Var;

typedef struct
{
    Var *vars;
    int numVar;
} Memoria;

Memoria *mem;
int tamPilha = 0;
char *str_aux;
char buffer[256];

int getPosMem(AST *node)
{
    int i;
    char *nome = get_data(node);
    if (nome == NULL)
    {
        return -1;
    }
    for (i = 0; i < mem->numVar; i++)
    {
        if (strcmp(mem->vars[i].nome, nome) == 0)
        {
            return i;
        }
    }
    return -1;
}

void genPrintLastF(FILE *arq_j)
{
    str_aux = strdup("\n   gstatic java/lang/System/out Ljava/io/PrintStream;");
    fprintf(arq_j, "%s", str_aux);
    sprintf(buffer, "%d", tamPilha);
    str_aux = strdup("\n   fload ");
    fprintf(arq_j, "%s %s", str_aux, buffer);
    str_aux = strdup("\n   invokevirtual java/io/PrintStream/println(I)V");
    fprintf(arq_j, "%s", str_aux);
}

void genAtomOpMath(AST *node, FILE *arq_j)
{
    switch (get_op_arit(node))
    {
    case OP_PLUS:
        str_aux = strdup("\n   fadd");
        fprintf(arq_j, "%s", str_aux);
        break;
    case OP_MINUS:
        str_aux = strdup("\n   fsub");
        fprintf(arq_j, "%s", str_aux);
        break;
    case OP_TIMES:
        str_aux = strdup("\n   fmul");
        fprintf(arq_j, "%s", str_aux);
        break;
    case OP_OVER:
        str_aux = strdup("\n   fdiv");
        fprintf(arq_j, "%s", str_aux);
        break;
    default:
        break;
    }
}

void genOpMathCode(AST *node, FILE *arq_j)
{
    int posMem;
    char *data1, *data2;
    double number;
    AST *son1, *son2, *dad;

    dad = get_dad(node);
    son1 = get_child(node, 0);
    son2 = get_child(node, 1);

    posMem = getPosMem(son1);
    if (posMem != -1)
    {
        data1 = mem->vars[posMem].valor;
    }
    else
    {
        data1 = get_data(son1);
    }

    posMem = getPosMem(son2);
    if (posMem != -1)
    {
        data2 = mem->vars[posMem].valor;
    }
    else
    {
        data2 = get_data(son2);
    }

    if (data2 != NULL)
    {
        printf("\n%s\n", data2);
    }

    str_aux = strdup("\n   bipush ");
    fprintf(arq_j, "%s %s", str_aux, data1);
    sprintf(buffer, "%d", tamPilha);

    str_aux = strdup("\n   fstore ");
    fprintf(arq_j, "%s %s", str_aux, buffer);
    tamPilha++;

    str_aux = strdup("\n   bipush ");
    fprintf(arq_j, "%s %s", str_aux, data2);
    sprintf(buffer, "%d", tamPilha);

    str_aux = strdup("\n   fstore ");
    fprintf(arq_j, "%s %s", str_aux, buffer);
    tamPilha++;

    sprintf(buffer, "%d", tamPilha - 2);
    str_aux = strdup("\n   fload ");
    fprintf(arq_j, "%s %s", str_aux, buffer);

    sprintf(buffer, "%d", tamPilha - 1);
    str_aux = strdup("\n   fload ");
    fprintf(arq_j, "%s %s", str_aux, buffer);

    
    genAtomOpMath(node, arq_j);

    sprintf(buffer, "%d", tamPilha);
    str_aux = strdup("\n   fstore ");
    fprintf(arq_j, "%s %s", str_aux, buffer);
    tamPilha++;

    genPrintLastF(arq_j);

    while (true)
    {
        if (get_kind(dad) == EQUAL_NODE)
        {
            break;
        }

        printf("%s", kind2str(get_kind(dad)));

        son2 = get_child(node, 1);

        posMem = getPosMem(son2);
        if (posMem != -1)
        {
            data2 = mem->vars[posMem].valor;
        }
        else
        {
            data2 = get_data(son2);
        }

        str_aux = strdup("\n   bipush ");
        fprintf(arq_j, "%s %s", str_aux, data2);
        sprintf(buffer, "%d", tamPilha);
        str_aux = strdup("\n   fstore ");
        fprintf(arq_j, "%s %s", str_aux, buffer);
        tamPilha++;

        sprintf(buffer, "%d", tamPilha - 2);
        str_aux = strdup("\n   fload ");
        fprintf(arq_j, "%s %s", str_aux, buffer);

        sprintf(buffer, "%d", tamPilha - 1);
        str_aux = strdup("\n   fload ");
        fprintf(arq_j, "%s %s", str_aux, buffer);
        
        genAtomOpMath(node, arq_j);

        sprintf(buffer, "%d", tamPilha);
        str_aux = strdup("\n   fstore ");
        fprintf(arq_j, "%s %s", str_aux, buffer);
        tamPilha++;

        genPrintLastF(arq_j);
        
        dad = get_dad(dad);
        if(dad==NULL){
            break;
        }
    }
}

void generateCodeFromAST(AST *node, FILE *arq_j)
{
    int i, total_filhos;
    int posMem = -1;
    AST *son, *son1, *son2;
    total_filhos = get_child_count(node);

    switch (get_kind(node))
    {
    case EQUAL_NODE:
        if (total_filhos == 2)
        {
            son1 = get_child(node, 0);
            son2 = get_child(node, 1);

            posMem = getPosMem(son2);

            //printf("NUM_VARS: %d\n", mem->numVar);

            if (posMem != -1)
            {
                mem->vars[posMem].valor = strdup(get_data(son1));
                break;
            }

            if (mem->numVar == 0)
            {
                mem->numVar++;
                mem->vars = (Var *)malloc(sizeof(Var));
            }
            else
            {
                mem->numVar++;
                mem->vars = (Var *)realloc(mem->vars, sizeof(Var) * mem->numVar);
            }

            if (get_child_count(son1) == 0)
            {
                mem->vars[mem->numVar - 1].valor = strdup(get_data(son1));
            }

            mem->vars[mem->numVar - 1].nome = strdup(get_data(son2));
        }
        break;
    case OP_MATH_NODE:
        //printf("%s", kind2str(get_kind(node)));
        son1 = get_child(node, 0);
        if (get_child_count(son1) == 2)
        {   
            genOpMathCode(node, arq_j);
        }
        break;
    default:
        break;
    }

    for (i = total_filhos - 1; i >= 0; i--)
    {
        son = get_child(node, i);
        if (get_data(son) != NULL)
        {
            //printf("DATA: %s\n", get_data(son));
        }
        generateCodeFromAST(son, arq_j);
    }
}

void generate(AST *root, FILE *arq_j)
{
    fprintf(arq_j, "%s", jasmin_start);

    mem = (Memoria *)malloc(sizeof(Memoria));
    mem->numVar = 0;
    generateCodeFromAST(root, arq_j);

    fprintf(arq_j, "%s", print_jasmin);
    fprintf(arq_j, "%s", jasmin_end);
}