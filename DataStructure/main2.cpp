#include "Stack.h"
#include <iostream>
#include "utils.h"

int main()
{
    //array for example
    int arr[] = { 1, 2, 3, 4, 5 };
    unsigned int size = sizeof(arr) / sizeof(arr[0]);
    unsigned int i = 0;

    // Print the og array
    std::cout << "Original array: ";
    for (i = 0; i < size; i++) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Reverse the array using the reverse function
    reverse(arr, size);

    // Print the reversed array
    std::cout << "Reversed array: ";
    for (i = 0; i < size; i++) 
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}