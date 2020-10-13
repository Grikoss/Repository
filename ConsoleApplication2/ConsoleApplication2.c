#include <stdio.h>
#include <stdlib.h>

typedef struct ListElement
{
	int value;
	struct ListElement* next;
} ListElement;

typedef struct ListHeadTail
{
	struct ListElement* head;
} ListHeadTail;

void createList()
{
	ListElement* nullElement = malloc(sizeof(struct ListElement));
	ListHeadTail* list = malloc(sizeof(struct ListHeadTail));
	nullElement->value = NULL;
	nullElement->next = NULL;
	list->head = nullElement;
}

void print(ListHeadTail* list)
{
	while (!isEmpty)
	{
		printf("%i\n", (list->head->value));
		list->head = list->head->next;
	}
}

void main() {
	

}