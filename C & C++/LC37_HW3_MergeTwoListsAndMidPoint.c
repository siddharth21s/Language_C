#include "LC37_HW3_MergeTwoListsAndMidPoint.h"
#include<stdio.h>
#include<stdlib.h>

NODE_T * Create( size_t noOfNodes)
{
	NODE_T * head =NULL;
	printf("\n%s",__FUNCTION__);
	for(size_t i=1;i<=noOfNodes;i++)
	{
		int data=0;
		printf("\nEnter data to add at position %d:\t",i);
		scanf("%d",&data);
		head= Insert(head, data);
	}
	return head;
}

NODE_T * Insert( NODE_T * head,  int data)	// size_t,
{
	printf("\n%s",__FUNCTION__);
	NODE_T * temp = (NODE_T*)malloc(sizeof(NODE_T));
	if(NULL != temp)
	{
		temp->data = data;
		temp->next = NULL;
		if(NULL == head)
		{
			head=temp;
			printf("\ntemp = %d \n",temp->data);
		}
		else //linked already has some nodesnow inserting
		{
			if(head->data >data)
			{
				temp->next=head;
				head=temp;
				
				
			}
			else//Any othe position
			{
				NODE_T * traverse = head;
				
				while(traverse->next != NULL && traverse->data < data && traverse->next->data < data)
				{
					traverse = traverse->next;
				}
				//printf("\ntemp = %d \n",temp->data);
				temp->next=traverse->next;
				traverse->next=temp;
				//printf("\ntemp2 = %d \n",traverse->data);
				
			}
		}
	}
	else
	{
		printf("\nFailed Allocationg Memory to new node,keeping linked-list unchanged\n");
	}
	return head;
	
}

void Display( NODE_T *  head)
{
	printf("\n%s\n",__FUNCTION__);
	NODE_T * traverse = head;
	do
	{
		printf("%d --> ",traverse->data);
		traverse=traverse->next;
	}while(traverse!= NULL);
	
	if(traverse == NULL)
		printf("NULL\n");
}

NODE_T * Delete(NODE_T * head,  size_t position)
{
	printf("\n%s\n",__FUNCTION__);
	if (NULL != head)
	{
		NODE_T * delNode = NULL;
		if(position == 1)
		{
			delNode=head;
			head=head->next;
			delNode -> next = NULL;
			
		}
		else
		{
			NODE_T * traverse = head;
			size_t pos = position;
			while(pos-2 !=0 && traverse->next != NULL)
			{
				traverse = traverse->next;
				pos--;
				
			}
			if(pos-2 != 0 || traverse->next == NULL)
				printf("\nInvalid position, Node not to delete  at specified position\n");
			else
			{
				delNode = traverse->next;
				traverse->next= delNode->next;
				delNode->next=NULL;
			}
			
		}
		free(delNode);
	}
	return head;
}

void Free(NODE_T ** head)
{
	printf("\n%s\n",__FUNCTION__);
	NODE_T *traverse = *head;
	while(traverse)
	{
		traverse = Delete(traverse,1);
	}
	*head = NULL;
}

NODE_T * Merge1(NODE_T * h1, NODE_T * h2)
{
	printf("\n%s\n",__FUNCTION__);
	NODE_T *head=NULL,*trav;
	trav = h1;
	while(trav)
	{
		head = Insert(head,trav->data);
		trav=trav->next;
	}
	trav=h2;
	while(trav)
	{
		head = Insert(head,trav->data);
		trav=trav->next;
	}
	
	return head;
}

void Midpoint(NODE_T * head)
{
	printf("\n%s\n",__FUNCTION__);
	NODE_T * trav1=head,*trav2=head;
	while(trav2->next)// && trav2->next->next)
	{
		trav1=trav1->next;
		trav2=trav2->next->next;
	}
	printf("%d",trav1->data);
}

NODE_T * Search( NODE_T *  head, int data)
{
	printf("\n%s",__FUNCTION__);
}


int main()
{
	int n;
	NODE_T *h1,*h2,*h3=NULL;
	printf("Enter Number of elements:\t");
	scanf("%d",&n);
	h1=Create(n);
	Display(h1);
	h2=Create(n);
	Display(h2);
	Midpoint(h1);
	Midpoint(h2);
	h3=Merge1(h1,h2);
	Display(h3);
	Free(&h1);
	Free(&h2);
	Free(&h3);	
	
}
