# Makefile for 2Dgen

all: 2dgen1 2dgen2

2dgen1: main.c misc.h
	gcc -g -o 2dgen1 main.c -Wall

2dgen2: cmain.c cluster.h
	gcc -g -o 2dgen2 cmain.c -Wall

clean:
	@rm -f 2dgen1 2dgen2

