#include "Queue.h"
#include <iostream>

/*function Initializes a queue with a specified maximum size
*output: none
* input: pointer to the queue struct and size
*/
void initQueue(Queue* q, unsigned int size)
{
	q->data = new unsigned int [size];
	q->size = size;
	q->front = 0;
	q->end = -1;
	q->count = 0;
}

/*function cleaning the queue
*output: none
* input: pointer to the queue struct and size
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

/*function adding to the queue new values
*output: none
* input: pointer to the queue struct and value
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
		std::cerr << "Queue is full. Cannot enqueue " << newValue << std::endl;
	}
}

/*function removing from the queue
*output: value or -1 if empty
* input: pointer to the queue struct
*/
int dequeue(Queue* q)
{
	if (!isEmpty(q))
	{
		int value = q->data[q->front];
		q->front = (q->front + 1) % q->size; // Circular update
		q->count--;
		return value;
	}
	std::cerr << "Queue is empty. Cannot dequeue." << std::endl;
	return -1;
}
/*function checking if empty
*output: true false
* input: pointer to the queue struct
*/
bool isEmpty(Queue* s)
{
	return s->count == 0;
}

/*function checking if full
*output: true false
* input: pointer to the queue struct
*/
bool isFull(Queue* s)
{
	return s->count == s->size;
}
