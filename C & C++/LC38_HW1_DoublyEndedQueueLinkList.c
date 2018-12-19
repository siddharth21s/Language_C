#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>
#include "LC38_HW1_DoublyEndedQueueLinkList.h"

void Pushrear(QUEUE_T * qt,int data)
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

void Pushfront(QUEUE_T * qt,int data)
{
	printf("\n%s\n",__FUNCTION__);
	struct Queue * temp = (struct Queue *) malloc(sizeof(struct Queue));
	if(temp)
	{
		temp->next=NULL;
		temp->data = data;
		if(qt->front)
		{
			temp->next=qt->front;
			qt->front=temp;
		}
		else
		{
			qt->front=temp;
			qt->rear=temp;
		}
		printf("\nFront: %d & Rear: %d",qt->front->data,qt->rear->data);
	}
}

int Popfront(QUEUE_T * qt)
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
		if(qt->front != NULL)
			printf("\nFront: %d & Rear: %d",qt->front->data,qt->rear->data);
		else
			printf("Front: NULL & Rear: NULL");
		return data;
	}
	return -1;
}

int Poprear(QUEUE_T * qt)
{
	printf("\n%s\n",__FUNCTION__);
	if(qt->rear)
	{
		struct Queue * trav = qt->front;
		while(trav->next->next)
		{
			trav=trav->next;
		}
		qt->rear=trav;
		trav=trav->next;
		int data = trav->data;
		free(trav);
		if(qt->front != NULL)
			printf("\nFront: %d & Rear: %d",qt->front->data,qt->rear->data);
		else
			printf("Front: NULL & Rear: NULL");
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
			Popfront(qt);
	}
}

int main()
{
	QUEUE_T Q;
	printf("%d\n",NULL);
	Q.front=NULL;
	Q.rear=NULL;
	Pushfront(&Q,5);
	Pushrear(&Q,1);
	Pushfront(&Q,6);
	printf("\n%d\n",Poprear(&Q));
	printf("\n%d\n",Popfront(&Q));
	printf("\n%d\n",Popfront(&Q));
	Pushrear(&Q,1);
	Pushfront(&Q,6);
	FreeQ(&Q);
}
