#include <iostream>
#include "test.hpp"
#include "test.hpp"

using namespace std;

int y = 19;

int main() {

    // const int y;
    // const int x;
//where ami



/*

CC=g++
INCDIRS=-I.
OPT=-O0
CFLAGS=-Wall -Wextra -g $(INCDIRS) $(OPT)

OBJECTS=main.o

BINARY=main.out

all: $(BINARY) clean

# if i wanna build: $(CC) -o $@ $^, then i need $(OBJECTS)

$(BINARY): $(OBJECTS) 	# <post-cond>: <pre-cond>
	if $(CC) $^ -o $@; then \
		echo "Linking riuscito"; \
		cp main.cpp main_stg.cpp; \
	else \
		echo "Linking no riuscito"; \
		if [ -f "main_stg.cpp" ]; then \
			cp main_stg.cpp main.cpp; \
		fi; \
	fi
	
%.o: %.cpp # implicit rule for $(OBJECTS) using placeholder '%'
	@if $(CC) $(CFLAGS) -c -o $@ $^; then \
	echo "Compilazione riuscita"; \
	else echo "Compilazione non riuscita";\
	fi

clean:
	rm -rf $(OBJECTS)
	



*/

    
    cout << "call to function: #";

    return 0;

}