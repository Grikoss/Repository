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
	while (!isEmpty(list)) {
		ListElement* oldHead = list->head;
		list->head = list->head->next;
		free(oldHead);
	}

	free(list->head);
	free(list);
}

void createList()
{
	ListElement* nullElement = malloc(sizeof(struct ListElement));
	if (nullElement == NULL) {
		return;
	}

	ListHeadTail* list = malloc(sizeof(struct ListHeadTail));
	if (nullElement == NULL) {
		return;
	}

	nullElement->value = 0;
	nullElement->next = NULL;
	if (list == NULL) {
		return;
	}

	list->head = nullElement;
}

void print(ListHeadTail* list)
{
	while (!isEmpty(list))
	{
		printf("%i\n", (list->head->value));
		list->head = list->head->next;
	}
}

void main() {
	

}