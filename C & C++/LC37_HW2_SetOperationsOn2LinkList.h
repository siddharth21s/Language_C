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
NODE_T * Insert( NODE_T * head, int data);//, size_t
void Display( NODE_T *  head);
NODE_T * Delete(NODE_T * head,  size_t position);
NODE_T * Unionl(NODE_T * h1,NODE_T * h2);
NODE_T * Intersect(NODE_T * h1,NODE_T * h2);
void Free(NODE_T ** head);
NODE_T * Search( NODE_T *  head, int data);
void Deletesame(NODE_T * head);
#endif
