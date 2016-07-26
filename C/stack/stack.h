#include "../common/common.h"

#ifndef STACK
#define STACK

typedef struct {
	int size;
	Node first;
} stack;
typedef stack* Stack;

Stack newStack();
void push(Stack stack, int value);
int pop(Stack stack);
void pprint_stack(const char* identifier, Stack stack);

#endif
