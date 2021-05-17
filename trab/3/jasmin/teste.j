.class public Calculator
.super java/lang/Object

; default constructor
.method public <init>()V
   aload_0
   invokespecial java/lang/Object/<init>()V
   return
.end method

; centigrade to Farenheit conversion
; F = 9 * C / 5 + 32
.method public c2f(F)F
   .limit stack 4
   .limit locals 2
   fload 1
   ldc 9.0
   fmul
   ldc 5.0
   fdiv
   ldc 32.0
   fadd
   freturn
.end method

; Farenheit to centigrade conversion
; C = 5 * (f - 32) / 9
.method public f2c(F)F
   .limit stack 4
   .limit locals 2
   fload 1
   ldc 32.0
   fsub
   ldc 5.0
   fmul
   ldc 9.0
   fdiv
   freturn
.end method


; Exemplo 02 - Somas utilizando variáveis locais.

; public class Soma
; {
;	public static void main(String []args)
;	{
;		int a;
;		int b;
;		int c;
;		
;		a = 50;
;		b = 100;
;		c = a + b;
;
;		System.out.println(c);
;   } 
;}

.class pulic Soma
.super java/lang/Object

.method public static main([Ljava/lang/String;)V
    .limit stack 10
    .limit locals 10
    
    bipush 50   ; a = 50; valor armazenado na memória.
    istore 0    ; o valor 50, se armazena na pilha
    bipush 100  ; b = 100;
    istore 1    ; o valor 100, se armazena na pilha
    
    iload 0     ; carrega o valor 50
    iload 1     ; carrega o valor 100
    iadd
     
     istore 2   ; armazena o valor da soma.. c = a + b
     
     gstatic java/lang/System/out Ljava/io/PrintStream;
     iload 2    ; carrega na memória o valor  de c
     invokevirtual java/io/PrintStream/println(I)V
     
     return
.end method

//Código Aqui!
#include <stdio.h>
  
int main()
{
    char buffer[50];
    char* s = "geeksforgeeks";
  
    // Counting the character and storing 
    // in buffer using snprintf
    int j = snprintf(buffer, 6, "%s\n", s);
  
    // Print the string stored in buffer and
    // character count
    printf("string:\n%s\ncharacter count = %d\n",
                                     buffer, j);
  
    return 0;
}