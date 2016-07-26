#include <stdio.h>

#include "stack.h"

int main() {
	int i;
	Stack stack = newStack();

	for (i = 0; i < 10; i++)
		push(stack, i);

	pprint_stack("Test", stack);
	printf("Pop: %d, ", pop(stack));
	printf("%d and ", pop(stack));
	printf("%d\n", pop(stack));
	push(stack, 23);
	pprint_stack("Test_2", stack);

	return 0;
}
