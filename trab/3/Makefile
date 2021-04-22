all: bison flex gcc
	@echo "Done."

bison: parser.y
	bison --debug -v parser.y

flex: scanner.l
	flex scanner.l

gcc: scanner.c parser.c
	gcc -Wall -o trab scanner.c parser.c ast.c

exec: test.py
	./trab < test.py

dot: test.dot
	dot -Tpdf test.dot -o test.pdf

clean:
	@rm -f *.o *.output scanner.c parser.h parser.c *.dot *.pdf trab