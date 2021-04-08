all: bison flex gcc
	@echo "Done."

bison: parser.y
	bison --debug -v parser.y

flex: scanner.l
	flex scanner.l

gcc: scanner.c parser.c
	gcc -Wall -o trab scanner.c parser.c tables.c ast.c

test: trab
	@for name in tests/should_succeed/*; do\
	 	echo -e '\n'$${name};\
        ./trab < $${name};\
    done; echo "Done."\

	@for name in tests/should_fail/*; do\
	 	echo -e '\n'$${name};\
        ./trab < $${name};\
    done; echo "Done."\

clean:
	@rm -f *.o *.output scanner.c parser.h parser.c *.dot *.pdf trab