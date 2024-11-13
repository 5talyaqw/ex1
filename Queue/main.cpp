#include <iostream>
#include "queue.h"

int main() 
{
    Queue q;
    initQueue(&q, 5);

    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);

    std::cout << "Dequeue: " << dequeue(&q) << std::endl;  // Output: 10
    std::cout << "Dequeue: " << dequeue(&q) << std::endl;  // Output: 20

    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);

    std::cout << "Is queue full? " << (isFull(&q) ? "Yes" : "No") << std::endl;

    cleanQueue(&q); // Free memory

    return 0;
}