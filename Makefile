# ASCII character manipulation example
GCC=gcc

changeCase: changeCase.c test.c
	${GCC} -o changeCase changeCase.c test.c

clean:
	rm changeCase
