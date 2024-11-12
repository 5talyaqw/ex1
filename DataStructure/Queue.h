#ifndef QUEUE_H
#define QUEUE_H




/* a queue contains positive integer values. */
typedef struct Queue
{
	unsigned int* data; //array
	unsigned int size; //max queue size
	int front; //index to the start
	int end; // index to the end
	int count; //num of elements
} Queue;

void initQueue(Queue* q, unsigned int size);
void cleanQueue(Queue* q);

void enqueue(Queue* q, unsigned int newValue);
int dequeue(Queue* q); // return element in top of queue, or -1 if empty

bool isEmpty(Queue* s);
bool isFull(Queue* s);

#endif /* QUEUE_H */
