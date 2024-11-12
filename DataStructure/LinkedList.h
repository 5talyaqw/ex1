#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>


struct Node 
{
    unsigned int data; 
    Node* next;
};


struct LinkedList 
{
    Node* head; //head of the list
};


void initList(LinkedList* list);
void addToList(LinkedList* list, unsigned int value);
bool removeFromList(LinkedList* list);       
bool isEmpty(const LinkedList* list);        
void printList(const LinkedList* list);      

#endif // LINKEDLIST_H
