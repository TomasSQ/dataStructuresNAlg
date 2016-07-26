#include <stdlib.h>

#include "common.h"

Node newNode(int value) {
	Node node = (Node) malloc(sizeof(node));

	node->value = value;
	node->next = NULL;
	node->prev = NULL;

	return node;
}
