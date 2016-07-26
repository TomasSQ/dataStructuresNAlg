#include <stdlib.h>
#include <stdio.h>

#include "stack.h"

Stack newStack() {
	Stack stack = (Stack) malloc(sizeof(stack));

	stack->first = NULL;
	stack->size = 0;

	return stack;
}

void pushToStack(Stack stack, int value) {
	Node node = newNode(value);

	stack->size++;
	if (stack->first == NULL) {
		stack->first = node;
		return;
	}

	node->prev = stack->first;
	stack->first->next = node;

	stack->first = node;
}

int popFromStack(Stack stack) {
	Node first;
	int value;

	if (stack->size == 0) {
		return -1;
	}

	stack->size--;

	first = stack->first;
	value = first->value;

	stack->first = first->prev;
	free(first);

	return value;
}

void pprint_stack(const char* identifier, Stack stack) {
	Node node;

	printf("Stack %s with the following %d elements:\n\t", identifier, stack->size);

	node = stack->first;
	while (node != NULL) {
		printf("%d", node->value);
		node = node->prev;

		if (node != NULL) {
			printf(" ");
		}
	}

	printf("\n");
}
