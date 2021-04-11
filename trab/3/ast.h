#ifndef AST_H
#define AST_H

typedef enum {
    PROGRAM_NODE,
    COND_NODE,
    LOOP_NODE,
    FUNCTION_NODE,
    CLASS_NODE,
    WITH_NODE,

    EXPR_LIST_NODE,
    EXPR_NODE,

    ASSIGN_NODE,
    EQ_NODE,
    BLOCK_NODE,

    IF_NODE,

    LT_NODE,
    MINUS_NODE,
    OVER_NODE,
    PLUS_NODE,

    REPEAT_NODE,

    TIMES_NODE,
    VAR_DECL_NODE,
    VAR_LIST_NODE,
    VAR_USE_NODE,

    LOW_NODE,
    NL_NODE,
    SUB_NODE,
    SIMPLE_STMT_NODE,
    SMALL_STMT_NODE,
    YIELD_EXPR_NODE,
    FROM_NODE,
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
