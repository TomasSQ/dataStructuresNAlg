#include <stdlib.h>
#include <stdio.h>

#include "queue.h"

Queue newQueue() {
	Queue queue = (Queue) malloc(sizeof(queue));

	queue->size = 0;
	queue->first = NULL;

	return queue;
}

void addToQueue(Queue queue, int value) {
	Node aux;
	Node node = newNode(value);

	queue->size++;

	if (queue->first == NULL) {
		queue->first = node;
		return;
	}

	aux = queue->first;
	while (aux->next != NULL) {
		aux = aux->next;
	}

	aux->next = node;
}

int removeFromQueue(Queue queue) {
	Node first;
	int value;

	if (queue->size == 0)
		return -1;

	value = queue->first->value;

	first = queue->first->next;
	free(queue->first);

	queue->first = first;

	queue->size--;

	return value;
}

void pprint_queue(const char* identifier, Queue queue) {
	Node node;

	printf("Queue %s with the following %d elements:\n\t", identifier, queue->size);

	node = queue->first;
	while (node != NULL) {
		printf("%d", node->value);
		node = node->next;

		if (node != NULL) {
			printf(" ");
		}
	}

	printf("\n");
}
