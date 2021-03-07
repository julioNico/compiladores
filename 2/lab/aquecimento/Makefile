
all: bison flex gcc
	@echo "Done."
	@rm -f *.o *.output scanner.c parser.h parser.c

bison: parser.y
	bison parser.y

flex: scanner.l
	flex scanner.l

gcc: scanner.c parser.c
	gcc -Wall scanner.c parser.c -ly
