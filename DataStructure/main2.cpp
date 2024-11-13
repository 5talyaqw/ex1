#include "Stack.h"
#include <iostream>

int main()
{
    Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    std::cout << "Popped element: " << pop(&stack) << std::endl; // 30
    std::cout << "Popped element: " << pop(&stack) << std::endl; // 20
    std::cout << "Popped element: " << pop(&stack) << std::endl; // 10
    std::cout << "Popped element: " << pop(&stack) << std::endl; // -1 (stack is empty)

    cleanStack(&stack);
    return 0;
}