#include <stdlib.h>

#include "stack.h"

Stack newStack() {
	Stack stack = (Stack) malloc(sizeof(stack));

	stack->a = 0;

	return stack;
}
