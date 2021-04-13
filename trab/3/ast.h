#ifndef AST_H
#define AST_H

typedef enum {

    //  ESCOPO
    PROGRAM_NODE,
    FUNCTION_NODE,
    CLASS_NODE,
    BLOCK_NODE,

    // OPERADORES
    OP_EQUAL_NODE,

    //  LOOPS
    LOOP_NODE,

    // CONTROLE DE FLUXO
    FLOW_NODE,

    // RETURN
    RETURN_NODE,

    //  ATRIBUICAO
    EQ_NODE,

    //  IMPORT
    FROM_NODE,

    //  VARIAVEL
    NAME_NODE,
    NAME_NODE_LIST,

    //  OPERADORES MATEMATICOS
    MINUS_NODE,
    PLUS_NODE,
    OVER_NODE,
    TIMES_NODE,

    //  OPERADORES BOLEANOS
    AND_NODE,
    OR_NODE,    
    NOT_NODE,

    //  OPERADORES CONDICIONAIS
    IF_NODE,

    //  COMPARADORES
    CURTO_CIRCUITO_NODE,
    COMP_NODE,

    //  OPERADORES MALUCOS
    YIELD_EXPR_NODE,
    WITH_NODE,

    //  EXPRESSORES
    EXPR_STMT_LIST_NODE,
    EXPR_STMT_NODE,
    EXPR_NODE,

    //  OUTROS
    LOW_NODE,
    NL_NODE,
    SUB_NODE,
    SIMPLE_STMT_NODE,
    SMALL_STMT_NODE,
    STAR_NODE,
    TSE_NODE_LIST,
    TSE_NODE,
    TEST_NODE_LIST,
    COMPARACAO_NODE,
    OR_TEST_NODE,
    AND_TEST_NODE,
    IF_ELSE_NODE,
    LAMBDA_NODE,
    LIST_NODE,
    VBAR_NODE,
    ANNASSIGN_NODE,
} NodeKind;

struct node; // Opaque structure to ensure encapsulation.

typedef struct node AST;

AST* new_node(NodeKind kind, char* data);

void add_child(AST *parent, AST *child);
AST* get_child(AST *parent, int idx);

AST* new_subtree(NodeKind kind, int child_count, ...);

NodeKind get_kind(AST *node);
char* kind2str(NodeKind kind);

char* get_data(AST *node);

int get_child_count(AST *node);

void print_tree(AST *ast);
void print_dot(AST *ast, FILE *arq_dot);

void free_tree(AST *ast);

#endif
