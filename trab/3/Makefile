all: bison flex gcc
	@echo "Done."

bison: parser.y
	bison --debug -v parser.y

flex: scanner.l
	flex scanner.l

gcc: scanner.c parser.c
	gcc -Wall -o trab scanner.c parser.c ast.c code_gen.c

exec: tests/test.py
	rm -rf new_code/code.j
	./trab < tests/test.py
	mv *.dot dot/

.PHONY: dot

dot: dot/ast.dot
	dot -Tpdf dot/ast.dot -o dot/ast.pdf

jasmin: new_code/code.j  jasmin/jasmin.jar
	java -jar jasmin/jasmin.jar new_code/code.j
	mv *.class new_code/
	java -cp new_code/ Code

clean:
	@rm -f *.o *.output scanner.c parser.h parser.c dot/*.dot dot/*.pdf new_code/*.class new_code/*.j trab