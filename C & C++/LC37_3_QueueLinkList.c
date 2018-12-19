#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include "LC37_3_QueueLinkList.h"

void Enqueue(QUEUE_T * qt,int data)
{
	printf("\n%s\n",__FUNCTION__);
	struct Queue * temp = (struct Queue *) malloc(sizeof(struct Queue));
	if(temp)
	{
		temp->next=NULL;
		temp->data = data;
		if(qt->rear)
		{
			qt->rear->next = temp;
			qt->rear = temp;
		}
		else
		{
			qt->front = temp;
			qt->rear = temp;
		}
		printf("\nFront: %d & Rear: %d",qt->front->data,qt->rear->data);
	}
}

int Dequeue(QUEUE_T * qt)
{
	printf("\n%s\n",__FUNCTION__);
	if(qt->front)
	{
		struct Queue * Del = qt->front;
		qt->front = qt->front->next;
		if(qt->front == NULL)
			qt->rear = NULL;
		int data = Del->data;
		free(Del);
		return data;
	}
	return -1;
}

_Bool isEmpty(QUEUE_T * qt)
{
	printf("\n%s\n",__FUNCTION__);
	if(qt->front == NULL && qt->rear==NULL)
		return true;
	return false;
}

void FreeQ(QUEUE_T * qt)
{
	printf("\n%s\n",__FUNCTION__);
	if(qt)
	{
		while(qt->front)
			Dequeue(qt);
	}
}

int main()
{
	QUEUE_T Q;
	Q.front=NULL;
	Q.rear=NULL;
	Enqueue(&Q,5);
	Enqueue(&Q,1);
	Enqueue(&Q,6);
	printf("%d\n",Dequeue(&Q));
	printf("%d\n",Dequeue(&Q));
	printf("%d\n",Dequeue(&Q));
	FreeQ(&Q);
}
