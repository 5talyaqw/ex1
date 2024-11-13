#include "stack.h"
#include <iostream>

void push(Stack* s, unsigned int element)
{
	addToList(&s->list, element);
}

int pop(Stack* s)
{
	int topValue = 0;

	if (isEmpty(&s->list))
	{
		return -1;
	}
	topValue = s->list.head->data;
	removeFromList(&s->list);
	return topValue;
}

void initStack(Stack* s)
{
	initList(&s->list);
}

void cleanStack(Stack* s)
{
	while (!isEmpty(&s->list))
	{
		pop(s);
	}
}
