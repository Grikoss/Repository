#include <stdio.h>
#include <stdlib.h>

typedef struct ListElement
{
	int value;
	struct ListElement* next;
} ListElement;

typedef struct ListHeadTail
{
	struct ListHeadTail* head;
} ListHeadTail;

void createList()
{
	ListElement* nullElement = malloc(sizeof(struct ListElement));
	ListHeadTail* list = malloc(sizeof(struct ListHeadTail));
	nullElement->value = NULL;
	nullElement->next = NULL;
	list->head = nullElement;
}

void main() {
	

}