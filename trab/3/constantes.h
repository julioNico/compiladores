#ifndef CONSTANTES_H
#define CONSTANTES_H

const char* jasmin_start = R"(
.class public Code
.super java/lang/Object
.method public static main([Ljava/lang/String;)V
    .limit locals 50
    .limit stack 50
)";

const char* print_jasmin = R"(
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc "HelloWord JASMIN"
    invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V
)";


const char* jasmin_end = R"(
    ; getstatic java/lang/System/out Ljava/io/PrintStream;
    ; aload 0
    ; invokevirtual java/io/PrintStream/println(Ljava/lang/Object;)V
    return	
.end method
)";

#endif