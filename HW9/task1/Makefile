CC=gcc
LD=gcc
CFLAGS=-ggdb -Wall -pedantic -std=gnu99 -O3
LDFLAGS=

EX2_PROG=ex1

PROGS=$(EX2_PROG)

all: $(PROGS)

ex2:
		$(CC) -o $(EX2_PROG) $(CFLAGS) $(EX2_PROG).c
			./$(EX2_PROG)


clean:
		-rm -rf core *.o *~ "#"*"#" Makefile.bak $(PROGS) *.dSYM

