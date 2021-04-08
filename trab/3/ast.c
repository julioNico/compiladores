
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ast.h"
#include "tables.h"

#define CHILDREN_LIMIT 20 // Don't try this at home, kids... :P

struct node {
    NodeKind kind;
    char* data;
    int count;
    AST* child[CHILDREN_LIMIT];
};

AST* new_node(NodeKind kind, char* data) {
    AST* node = malloc(sizeof * node);
    node->kind = kind;
    node->data = data;
    node->count = 0;
    for (int i = 0; i < CHILDREN_LIMIT; i++) {
        node->child[i] = NULL;
    }
    return node;
}

void add_child(AST *parent, AST *child) {
    if (parent->count == CHILDREN_LIMIT) {
        fprintf(stderr, "Cannot add another child!\n");
        exit(1);
    }
    parent->child[parent->count] = child;
    parent->count++;
}

AST* get_child(AST *parent, int idx) {
    return parent->child[idx];
}

AST* new_subtree(NodeKind kind, int child_count, ...) {
    if (child_count > CHILDREN_LIMIT) {
        fprintf(stderr, "Too many children as arguments!\n");
        exit(1);
    }

    AST* node = new_node(kind, 0);
    va_list ap;
    va_start(ap, child_count);
    for (int i = 0; i < child_count; i++) {
        add_child(node, va_arg(ap, AST*));
    }
    va_end(ap);
    return node;
}

NodeKind get_kind(AST *node) {
    return node->kind;
}

char* get_data(AST *node) {
    return node->data;
}

int get_child_count(AST *node) {
    return node->count;
}

void free_tree(AST *tree) {
    if (tree == NULL) return;
    for (int i = 0; i < tree->count; i++) {
        free_tree(tree->child[i]);
    }
    free(tree);
}

// Dot output.

int nr;

extern VarTable *vt;

char* kind2str(NodeKind kind) {
    switch(kind) {
        case ASSIGN_NODE:   return ":=";
        case EQ_NODE:       return "=";
        case BLOCK_NODE:    return "block";
        case IF_NODE:       return "if";
        case LT_NODE:       return "<";
        case MINUS_NODE:    return "-";
        case OVER_NODE:     return "/";
        case PLUS_NODE:     return "+";
        case PROGRAM_NODE:  return "program";
        case REPEAT_NODE:   return "repeat";
        case TIMES_NODE:    return "*";
        case VAR_DECL_NODE: return "var_decl";
        case VAR_LIST_NODE: return "var_list";
        case VAR_USE_NODE:  return "var_use";
        case LOW_NODE:      return "LOW";
        case NL_NODE:       return "NEWLINE";
        default:            return "ERROR!!";
    }
}

int has_data(NodeKind kind) {
    switch(kind) {
        case VAR_DECL_NODE:
        case VAR_USE_NODE:
            return 1;
        default:
            return 0;
    }
}

int print_node_dot(AST *node, FILE *arq_dot) {
    int my_nr = nr++;

    fprintf(arq_dot, "node%d[label=\"", my_nr);
    if (node->kind == VAR_DECL_NODE || node->kind == VAR_USE_NODE) {
        fprintf(arq_dot, "%s@", node->data);
    } else {
        fprintf(arq_dot, "%s", kind2str(node->kind));
    }
    if (has_data(node->kind)) {
        fprintf(arq_dot, "%s", node->data);
    }
    fprintf(arq_dot, "\"];\n");

    for (int i = 0; i < node->count; i++) {
        int child_nr = print_node_dot(node->child[i], arq_dot);
        fprintf(arq_dot, "node%d -> node%d;\n", my_nr, child_nr);
    }
    return my_nr;
}

void print_dot(AST *tree, FILE *arq_dot) {
    nr = 0;
    fprintf(arq_dot, "digraph {\ngraph [ordering=\"out\"];\n");
    print_node_dot(tree, arq_dot);
    fprintf(arq_dot, "}\n");
}
