#include <stdio.h>
#include <iostream>
using namespace std;

struct node { 
    int data; 
    struct node* next; // Pointer to next node in DLL 
    struct node* prev; // Pointer to previous node in DLL 
};
struct DLL
{
    node * head;
    node * tail;
};

void insertBeforeFirst(DLL * list, int data);
void insertAfterLast(DLL * list, int data);
void insertBefore(DLL * list, int data, int pos);
void insertAfter(DLL * list, int data, int pos);

node * findLargestPointer(DLL * list);
node * findSmallestPointer(DLL * list);
int findSum(DLL * list);
int findLength(DLL * list);

void printDLL(DLL * list);

int printNodeData(node * Node);

DLL *arrayToDLL(int * array, int length);