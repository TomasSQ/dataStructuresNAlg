GCC_FLAGS=-Werror -pedantic -Wall -lm -o

all: clean stack

clean:
	clear

stack:
	gcc $(GCC_FLAGS) stack_test.x stack.c stack_test.c

test: all
	./stack_test.x
