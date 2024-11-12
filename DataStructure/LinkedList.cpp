#include "LinkedList.h"
/*
* The function initializes the list
* output: none
* input: list pointer to the linked list
*/
void initList(LinkedList* list)
{
	list->head = nullptr;
}
/*
* function adding new values to the linked list
* output: none
* input: list pointer to the linked list, new value to add
*/
void addToList(LinkedList* list, unsigned int value)
{
	Node* newNode = new Node;
	newNode->data = value;
	newNode->next = list->head;
	list->head = newNode;
}
/*
* function removing from the list
* output: true false
* input: list pointer to the linked list
*/
bool removeFromList(LinkedList* list)
{
	if (isEmpty(list)) 
	{
		std::cerr << "Cannot remove from an empty list." << std::endl;
		return false;
	}
	Node* temp = list->head;
	list->head = list->head->next;
	delete temp;
	return true;
}
/*
* function checking if list is empty
* output: true false
* input: list pointer to the linked list
*/
bool isEmpty(const LinkedList* list)
{
	return list->head == nullptr;
}

/*
* function is printing the list.
* output:none
* input: list pointer to linked list
*/
void printList(const LinkedList* list)
{
	Node* current = list->head;
	std::cout << "List: ";
	while (current != nullptr) 
	{
		std::cout << current->data << " ";
		current = current->next;
	}
	std::cout << std::endl;
}
