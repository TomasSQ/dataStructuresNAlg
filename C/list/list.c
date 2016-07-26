#include <stdlib.h>
#include <stdio.h>

#include "list.h"

List newList() {
	List list = (List) malloc(sizeof(list));

	list->size = 0;
	list->head = NULL;
	list->tail = NULL;

	return list;
}

void addToList(List list, int value) {
	Node node = newNode(value);

	list->size++;

	if (list->head == NULL) {
		list->head = node;
		list->tail = node;
		return;
	}

	node->prev = list->tail;
	list->tail->next = node;
	list->tail = node;
}

void addToListBegin(List list, int value) {
	Node node = newNode(value);

	list->size++;

	if (list->head == NULL) {
		list->head = node;
		list->tail = node;
		return;
	}

	node->next = list->head;
	list->head->prev = node;
	list->head = node;
}

void removeFromList(List list, int value) {
	Node aux;
	Node node = list->head;

	if (list->size == 0) {
		return;
	}

	if (node->value == value) {
		list->size--;
		list->head = node->next;
		list->head->prev = NULL;
		free(node);

		return;
	}

	while (node->next != NULL && node->next->value != value) {
		node = node->next;
	}

	if (node->next == NULL) {
		return;
	}

	list->size--;
	aux = node->next;
	node->next = aux->next;

	if (aux->next != NULL) {
		aux->next->prev = node;
	} else {
		list->tail = node;
	}

	if (aux->prev == NULL) {
		list->head = node;
	}

	free(aux);
}

void pprint_list(const char* identifier, List list) {
	Node node;

	printf("List %s with the following %d elements:\n\t", identifier, list->size);

	node = list->head;
	while (node != NULL) {
		printf("%d", node->value);
		node = node->next;

		if (node != NULL) {
			printf(" ");
		}
	}

	printf("\n");
}

void pprint_listReverse(const char* identifier, List list) {
	Node node;

	printf("List %s with the following %d elements (reversed):\n\t", identifier, list->size);

	node = list->tail;
	while (node != NULL) {
		printf("%d", node->value);
		node = node->prev;

		if (node != NULL) {
			printf(" ");
		}
	}

	printf("\n");
}
