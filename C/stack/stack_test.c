#include <stdio.h>

#include "stack.h"

int main() {
	int i;
	Stack stack = newStack();

	for (i = 0; i < 10; i++)
		pushToStack(stack, i);

	pprint_stack("Test", stack);
	printf("Pop: %d, ", popFromStack(stack));
	printf("%d and ", popFromStack(stack));
	printf("%d\n", popFromStack(stack));
	pushToStack(stack, 23);
	pprint_stack("Test_2", stack);

	return 0;
}
