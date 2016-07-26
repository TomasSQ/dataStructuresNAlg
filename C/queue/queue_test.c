#include <stdio.h>

#include "queue.h"

int main() {
	int i;
	Queue queue = newQueue();

	for (i = 1; i < 7; i++)
		addToQueue(queue, i);

	pprint_queue("Test", queue);

	printf("Removed: %d, ", removeFromQueue(queue));
	printf("%d and ", removeFromQueue(queue));
	printf("%d\n", removeFromQueue(queue));

	addToQueue(queue, 10);
	pprint_queue("Test2", queue);

	return 0;
}
