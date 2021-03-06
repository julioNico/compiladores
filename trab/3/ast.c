
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"

struct node
{
    int id;
    NodeKind kind;
    char *data;
    int count;
    AST **child;
    AST *dad;
};

AST *new_node(NodeKind kind, char *data)
{
    AST *node = (AST *)malloc(sizeof(AST));
    node->id = 0;
    node->kind = kind;
    node->data = data;
    node->count = 0;
    node->child = NULL;
    node->dad = NULL;
    return node;
}

char *funkBuiltIn[] = {
    "abs",
    "delattr",
    "hash",
    "memoryview",
    "set",
    "all",
    "dict",
    "help",
    "min",
    "setattr",
    "any",
    "dir",
    "hex",
    "next",
    "slice",
    "ascii",
    "divmod",
    "id",
    "object",
    "sorted",
    "bin",
    "enumerate",
    "input",
    "oct",
    "staticmethod",
    "bool",
    "eval",
    "int",
    "open",
    "str",
    "breakpoint",
    "exec",
    "isinstance",
    "ord",
    "sum",
    "bytearray",
    "filter",
    "issubclass",
    "pow",
    "super",
    "bytes",
    "float",
    "iter",
    "print",
    "tuple",
    "callable",
    "format",
    "len",
    "property",
    "type",
    "chr",
    "frozenset",
    "list",
    "range",
    "vars",
    "classmethod",
    "getattr",
    "locals",
    "repr",
    "zip",
    "compile",
    "globals",
    "map",
    "reversed",
    "__import__",
    "complex",
    "hasattr",
    "max",
    "round"};

void add_child(AST *parent, AST *child)
{
    if (child->kind == LOW_NODE)
    {
        return;
    }

    if (parent->count == 0)
    {
        parent->child = (AST **)malloc(sizeof(AST *));
    }
    parent->child[parent->count] = (AST *)malloc(sizeof(AST));

    child->dad = parent;
    child->id = parent->count;
    parent->child[parent->count] = child;
    parent->count++;
}

AST *get_child(AST *parent, int idx)
{
    return parent->child[idx];
}

AST *new_subtree(NodeKind kind, int child_count, ...)
{
    AST *node = new_node(kind, 0);
    va_list ap;
    va_start(ap, child_count);
    for (int i = 0; i < child_count; i++)
    {
        add_child(node, va_arg(ap, AST *));
    }
    va_end(ap);
    return node;
}

NodeKind get_kind(AST *node)
{
    return node->kind;
}

OpMath get_op_arit(AST *node)
{
    if(node->kind == OP_MATH_NODE && (node->data != NULL)){
        if(strcmp(node->data,"+")){
            return OP_PLUS;
        } else if (strcmp(node->data,"-")){
            return OP_MINUS;
        } else if (strcmp(node->data,"*")){
            return OP_TIMES;
        } else if (strcmp(node->data,"/")){
            return (OpMath) OP_OVER;
        }
    }
    return OP_NONE;
}

char *get_data(AST *node)
{
    return node->data;
}

int get_child_count(AST *node)
{
    return node->count;
}

int get_id(AST *node)
{
    return node->id;
}

AST *get_dad(AST *node)
{
    return node->dad;
}

void free_tree(AST *tree)
{
    if (tree == NULL)
        return;
    for (int i = 0; i < tree->count; i++)
    {
        free_tree(tree->child[i]);
    }
    free(tree);
}

// Dot output.

int nr;

char *kind2str(NodeKind kind)
{
    switch (kind)
    {
    case STRING_NODE:
        return "(STRING) ";
    case STRING_LIST_NODE:
        return "STRING_LIST_NODE";
    case EQUAL_NODE:
        return "=";
    case BLOCK_NODE:
        return "block";
    case IF_NODE:
        return "if";
    case ELSE_IF_NODE:
        return "ELSE_IF_NODE";
    case ELSE_NODE:
        return "ELSE_NODE";
    case OP_MATH_NODE:
        return "";
    case GLOBAL_NODE:
        return "GLOBAL_NODE";
    case NONLOCAL_NODE:
        return "NONLOCAL_NODE";
    case PROGRAM_NODE:
        return "PROGRAM";
    case NAME_NODE:
        return "NAME";
    case NAME_LIST_NODE:
        return "NAME_LIST";
    case NUMBER_NODE:
        return "(NUMBER) ";
    case LOW_NODE:
        return "LOW";
    case NL_NODE:
        return "NEWLINE";
    case SUB_NODE:
        return "NOT DEFINED!";
    case EXPR_NODE:
        return "EXPR_NODE";
    case EXPR_STMT_NODE:
        return "EXPR_STMT_NODE";
    case EXPR_STMT_LIST_NODE:
        return "EXPR_STMT_LIST_NODE";
    case STAR_NODE:
        return "STAR_NODE";
    case DOUBLESTAR_NODE:
        return "DOUBLESTAR_NODE";
    case FLOW_NODE:
        return "FLOW_NODE";
    case OP_EQUAL_NODE:
        return "OP_EQUAL_NODE";
    case IF_ELSE_NODE:
        return "IF_ELSE_NODE";
    case LAMBDA_NODE:
        return "LAMBDA_NODE";
    case TEST_NODE:
        return "TEST_NODE";
    case OP_BIT_A_BIT_NODE:
        return "OP_BIT_A_BIT_NODE";
    case OP_SINC_NODE:
        return "OP_SINC_NODE";
    case COLON_NODE:
        return "COLON_NODE";
    case PARAMETERS_NODE:
        return "PARAMETERS_NODE";
    case RARROW_NODE:
        return "RARROW_NODE";
    case FUNK_NODE:
        return "FUNK_NODE";
    case NONE_NODE:
        return "NONE_NODE";
    case BOOL_NODE:
        return "BOOL = ";
    case AND_NODE:
        return "AND";
    case OR_NODE:
        return "OR";
    case NOT_NODE:
        return "NOT";
    case COMP_NODE:
        return "";
    case COLONEQUAL_NODE:
        return "COLONEQUAL";
    case ARGUMENT_NODE:
        return "ARGUMENT_NODE";
    case CLASS_NODE:
        return "CLASS_NODE";
    case FOR_NODE:
        return "FOR_NODE";
    case WHILE_NODE:
        return "WHILE";
    case FOR_IN_NODE:
        return "FOR_IN_NODE";
    case WITH_NODE:
        return "WITH_NODE";
    case WITH_ITEM_NODE:
        return "WITH_ITEM_NODE";
    case AS_NODE:
        return "AS_NODE";
    default:
        return "ERROR!!";
    }
}

int has_data(NodeKind kind)
{
    switch (kind)
    {
    case BOOL_NODE:
    case STRING_NODE:
    case NUMBER_NODE:
    case COLON_NODE:
    case OP_SINC_NODE:
    case OP_MATH_NODE:
    case OP_BIT_A_BIT_NODE:
    case COMP_NODE:
    case NAME_NODE:
        return 1;
    default:
        return 0;
    }
}

int print_node_dot(AST *node, FILE *arq_dot)
{
    int my_nr = nr++;

    fprintf(arq_dot,
            "node%d[label=\"", my_nr);
    if (node->kind == NAME_NODE)
    {
        fprintf(arq_dot,
                "%s@", node->data);
    }
    else
    {
        fprintf(arq_dot,
                "%s", kind2str(node->kind));
    }
    if (has_data(node->kind))
    {
        fprintf(arq_dot,
                "%s", node->data);
    }
    fprintf(arq_dot,
            "\"];\n");

    for (int i = 0; i < node->count; i++)
    {
        int child_nr = print_node_dot(node->child[i], arq_dot);
        fprintf(arq_dot,
                "node%d -> node%d;\n", my_nr, child_nr);
    }
    return my_nr;
}

void print_dot(AST *tree, FILE *arq_dot)
{
    nr = 0;
    fprintf(arq_dot,
            "digraph {\ngraph [ordering=\"out\"];\n");
    print_node_dot(tree, arq_dot);
    fprintf(arq_dot,
            "}\n");
}

bool isBuiltIn(char *word)
{
    int i, len = sizeof(funkBuiltIn) / sizeof(funkBuiltIn[0]);

    for (i = 0; i < len; i++)
    {
        if (!strcmp(word, funkBuiltIn[i]))
        {
            return true;
        }
    }
    return false;
}

bool isLoop(AST *ast)
{   
    switch (ast->kind)
    {
    case WHILE_NODE:
    case FOR_IN_NODE:
    case FOR_NODE:
        return true;
    default:
        return false;
    }
}