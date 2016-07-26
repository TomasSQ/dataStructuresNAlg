#include "common.h"

#ifndef QUEUE
#define QUEUE

typedef struct {
	int size;
	Node first;
} queue;
typedef queue* Queue;

Queue newQueue();
void addToQueue(Queue queue, int value) ;
int removeFromQueue(Queue queue);
void pprint_queue(const char* identifier, Queue queue);

#endif
