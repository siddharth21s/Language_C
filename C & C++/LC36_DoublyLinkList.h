#ifndef DOUBLY_H
#define DOUBLY_H
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	struct Node * prev;
	struct Node * next;
	int data;
}NODE_T;

NODE_T * Create(const size_t noOfNodes);
NODE_T * Insert(NODE_T * head,const size_t position,const  int data);//, size_t
void Display(NODE_T * head);
void Reversedisplay(NODE_T * head);
NODE_T * Delete(NODE_T * head, const size_t position);
void Free(NODE_T ** head);
NODE_T * Search( NODE_T * const head,const int data);
#endif
