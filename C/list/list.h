#include "../common/common.h"

#ifndef LIST
#define LIST

typedef struct {
	int size;
	Node head;
	Node tail;
} list;
typedef list* List;

List newList();
void addToList(List list, int value);
void addToListBegin(List list, int value);
void removeFromList(List list, int value);
void pprint_list(const char* identifier, List list);
void pprint_listReverse(const char* identifier, List list);

#endif
