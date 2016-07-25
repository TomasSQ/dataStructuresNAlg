#include <stdio.h>
#include "stack.h"

int main() {
	Stack stack = newStack();

	stack->a = 10;

	printf("%d\n", stack->a);

	return 0;
}
