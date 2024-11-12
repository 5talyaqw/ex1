#include "Queue.h"
#include <iostream>

/*
*The function initializes the queue
* output:none
* input: q - pointer to the queue size- max num of elements
*/
void initQueue(Queue* q, unsigned int size)
{
	q->data = new unsigned int[size];
	q->size = size;
	q->front = 0;
	q->end = -1;
	q->count = 0;
}
/*
*The function cleaning the queue
* output:none
* input: q - pointer to the queue
*/
void cleanQueue(Queue* q)
{
	delete[] q->data;
	q->data = nullptr;
	q->size = 0;
	q->front = 0;
	q->end = -1;
	q->count = 0;
}
/*
*The function inserting numbers to the queue
* output:none
* input: q - pointer to the queue new value- the new value to insert to the queue
*/
void enqueue(Queue* q, unsigned int newValue)
{
	if (!isFull(q))
	{
		q->end = (q->end + 1) % q->size;
		q->data[q->end] = newValue;
		q->count++;
	}
	else
	{
		std::cerr << "Queue is full. cannot enqueue" << newValue << std::endl;
	}
}
/*
*The function removing from the queue
* output:value or -1 if empty
* input: q - pointer to the queue
*/
int dequeue(Queue* q)
{
	if (!isEmpty(q))
	{
		int value = q->data[q->front];
		q->front = (q->front + 1) % q->size;
		q->count--;
		return value;
	}
	std::cerr << "Queue is empty. cannot dequeue." << std::endl;
	return -1;
}
/*
*The function checking if queue is empty
* output:true or false
* input: s - pointer to the queue
*/
bool isEmpty(Queue* s)
{
	return s->count == 0;
}
/*
*The function checking if queue is full
* output:true or false
* input: s - pointer to the queue
*/
bool isFull(Queue* s)
{
	return s->count == s->size;
}