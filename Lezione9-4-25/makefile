 # This is a comment line
CC=g++
# CFLAGS will be the options passed to
# the compiler.
CFLAGS= -c -Wall
LFLAGS= -O -Wall
MAIN= main

all: prog clean
prog: main.o
	$(CC) main.o -o main.out;			\
	if ["$?" -ne 0]; then				\
		cp main_stg.cpp main.cpp;		\
	else								\
		cp main.cpp main_stg.cpp;		\
	fi
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
clean:
	rm -rf *.o

	




