#ifndef COMMON
#define COMMON

typedef struct node {
	int value;
	struct node* next;
	struct node* prev;
} node;
typedef node* Node;

Node newNode(int value);

#endif
