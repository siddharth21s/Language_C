#ifndef SINGLY_H
#define SNGLY_H
#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
	int data;
	struct Node * next;
}NODE_T;

//typedef struct Node NODE_T

NODE_T * Create( size_t noOfNodes);
NODE_T * Insert( NODE_T * head,  int position,  int data);//, size_t
void Display( NODE_T *  head);
NODE_T * Delete(NODE_T * head,  size_t position);
int Reverse(NODE_T * head);
int MidPoint(NODE_T * head);
void Free(NODE_T ** head);
NODE_T * Search( NODE_T *  head, int data);
#endif
