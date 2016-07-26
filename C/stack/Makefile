MODULE=stack

GCC_FLAGS=-Werror -pedantic -Wall -lm -o

all: clean common $(MODULE)

clean:
	rm -f $(MODULE)_test.out common.c common.h
	clear

$(MODULE):
	gcc $(GCC_FLAGS) $(MODULE)_test.x $(MODULE).c common.c $(MODULE)_test.c

common:
	ln -s ../common/common.c common.c
	ln -s ../common/common.h common.h

test: all
	./$(MODULE)_test.x > $(MODULE)_test.out
	cat $(MODULE)_test.out
	diff $(MODULE)_test.exp $(MODULE)_test.out && echo "Success" || echo "Failure"
