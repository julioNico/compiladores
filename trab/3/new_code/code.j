
.class public Code
.super java/lang/Object
.method public static main([Ljava/lang/String;)V
    .limit locals 50
    .limit stack 50

   bipush  /
   fstore  0
   bipush  1
   fstore  1
   fload  0
   fload  1
   fsub
   fstore  2
   gstatic java/lang/System/out Ljava/io/PrintStream;
   fload  3
   invokevirtual java/io/PrintStream/println(I)V
    getstatic java/lang/System/out Ljava/io/PrintStream;
    ldc "HelloWord JASMIN"
    invokevirtual java/io/PrintStream/println(Ljava/lang/String;)V

    ; getstatic java/lang/System/out Ljava/io/PrintStream;
    ; aload 0
    ; invokevirtual java/io/PrintStream/println(Ljava/lang/Object;)V
    return	
.end method
