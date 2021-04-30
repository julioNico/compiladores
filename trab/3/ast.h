#ifndef AST_H
#define AST_H

typedef enum
{

    //  ESCOPO
    PROGRAM_NODE,
    FUNCTION_NODE,
    CLASS_NODE,
    BLOCK_NODE,
    FUNK_NODE,

    // OPERADORES
    OP_EQUAL_NODE,

    //  LOOPS
    FOR_NODE,
    WHILE_NODE,
    FOR_IN_NODE,

    // CONTROLE DE FLUXO
    FLOW_NODE,

    // RETURN
    RETURN_NODE,

    //  ATRIBUICAO
    EQUAL_NODE,

    //  IMPORT
    FROM_NODE,

    //  VARIAVEIS
    BOOL_NODE,
    GLOBAL_NODE,
    NONLOCAL_NODE,
    NAME_NODE,
    NAME_LIST_NODE,
    NUMBER_NODE,
    STRING_NODE,
    STRING_LIST_NODE,
    PARAMETERS_NODE,
    RARROW_NODE,

    //  OPERADORES MATEMATICOS
    OP_MATH_NODE,

    // OPERADORES DE SINCRONIA
    OP_SINC_NODE,

    //  OPERADORES BOLEANOS
    AND_NODE,
    OR_NODE,
    NOT_NODE,

    //  OPERADORES CONDICIONAIS
    IF_NODE,
    ELSE_IF_NODE,
    ELSE_NODE,
    COLONEQUAL_NODE,

    //  OPERADORES BIT_A_BIT
    OP_BIT_A_BIT_NODE,

    //  OPERADORES MALUCOS
    YIELD_EXPR_NODE,
    WITH_NODE,
    WITH_ITEM_NODE,
    AS_NODE,

    //  COMPARADORES
    CURTO_CIRCUITO_NODE,
    COMP_NODE,

    //  EXPRESSOES
    EXPR_STMT_LIST_NODE,
    EXPR_STMT_NODE,
    EXPR_NODE,

    //  OUTROS
    LOW_NODE,
    NL_NODE,
    SUB_NODE,
    STAR_NODE,
    DOUBLESTAR_NODE,
    NONE_NODE,

    IF_ELSE_NODE,
    LAMBDA_NODE,
    TEST_NODE,
    VBAR_NODE,
    COLON_NODE,
    ARGUMENT_NODE,

} NodeKind;

#include<stdbool.h>

struct node; // Opaque structure to ensure encapsulation.

typedef struct node AST;

AST *new_node(NodeKind kind, char *data);

void add_child(AST *parent, AST *child);
AST *get_child(AST *parent, int idx);

AST *new_subtree(NodeKind kind, int child_count, ...);

NodeKind get_kind(AST *node);
char *kind2str(NodeKind kind);

char *get_data(AST *node);

int get_child_count(AST *node);
int get_id(AST *node);
AST *get_dad(AST *node);

void print_tree(AST *ast);
void print_dot(AST *ast, FILE *arq_dot);

void free_tree(AST *ast);
bool isBuiltIn(char* word);
bool DadIsLoop(AST *ast);
bool isLoop(AST *ast);

#endif
