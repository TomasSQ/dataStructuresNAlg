#include <stdio.h>

#include "list.h"

int main() {
	int i;

	List list = newList();

	for (i = 1; i < 7; i++)
		addToList(list, i);

	pprint_list("Test", list);
	pprint_listReverse("TestReverse", list);

	removeFromList(list, 4);
	removeFromList(list, 6);
	removeFromList(list, 1);

	pprint_list("Test_2", list);
	pprint_listReverse("TestReverse_2", list);

	return 0;
}
