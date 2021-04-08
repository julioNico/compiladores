#ifndef TOKEN_H
#define TOKEN_H

typedef struct {
    int type;
    char *lexeme;
    int lineno;
} Token;

#endif
