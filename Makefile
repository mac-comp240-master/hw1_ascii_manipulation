# ASCII character manipulation example
GCC=gcc

change_case: change_case.c test.c
	${GCC} -o change_case change_case.c test.c

clean:
	rm change_case
