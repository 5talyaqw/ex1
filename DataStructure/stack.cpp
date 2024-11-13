#include "stack.h"
#include <iostream>

/*
* function to add to the top of the stack
* output: none
* input: variable and the stack pointer
* 
*/
void push(Stack* s, unsigned int element)
{
	addToList(&s->list, element);
}
/*
* Function to remove the top element from the stack and return its value.
* output: returns -1 if the stack is empty.
* the value of the removed top element if the stack is not empty
* 
* input: the stack pointer
*
*/
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

/*
* Function to initialize the stack.
* output: none
* input: the stack pointer
*/
void initStack(Stack* s)
{
	initList(&s->list);
}

/*
* Function to clean the stack.
* output: none
* input: the stack pointer
*/
void cleanStack(Stack* s)
{
	while (!isEmpty(&s->list))
	{
		pop(s);
	}
}
