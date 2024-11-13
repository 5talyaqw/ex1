#include "utils.h"
#include "stack.h"
#include <iostream>
/*
* Function to reverse the array using stack
* output: none
* input: pointer to the array of nums and size of the array
*/
void reverse(int* nums, unsigned int size)
{
	Stack s;
	unsigned int i = 0;
	initStack(&s);

	for (i = 0;i < size;i++)
	{
		push(&s, nums[i]);
	}

	for (i = 0;i < size;i++)
	{
		nums[i] = pop(&s);
	}
	cleanStack(&s);
}

/*
* Function to reverse a fixed array of 10 integers using the stack.
* output: pointer to the reversed array of integers.
* input: none
*/
int* reverse10()
{
	// Create a sample array with 10 elements
	int nums[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	reverse(nums, 10); // Reverse the array
	return nums;
}
