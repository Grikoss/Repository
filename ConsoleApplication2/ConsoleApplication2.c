#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct ListElement
{
	int value;
	struct ListElement* next;
} ListElement;

typedef struct ListHeadTail
{
	struct ListElement* head;
} ListHeadTail;

bool isEmpty(ListHeadTail* list) {
	return list->head->next == NULL;
}

void delete(ListHeadTail* list) {
	while (!isEmpty) {
		ListElement* oldHead = list->head;
		list->head = list->head->next;
		free(oldHead);
	}

	free(list->head);
	free(list);
}

void main() {

}