#include "LC37_HW1_SortedLinkList.h"
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
			//printf("\ntemp = %d \n",temp->data);
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
	if(head!=NULL)
	{
		NODE_T * traverse = head;
		do
		{
			
			printf("%d --> ",traverse->data);
			traverse=traverse->next;
		}while(traverse!= NULL);
		
		if(traverse == NULL)
			printf("NULL\n");
	}
	else
	printf("\nNULL\n");
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


NODE_T * Search( NODE_T *  head, int data)
{
	printf("\n%s",__FUNCTION__);
}

NODE_T * Unionl(NODE_T * h1,NODE_T * h2)
{
	printf("\n%s\n",__FUNCTION__);
	
	NODE_T *head=NULL;
	NODE_T * trav1 = h1,*trav3 = head, *trav2 = h2;
	for(trav1 = h1;trav1 !=NULL;trav1=trav1->next)
		for(trav2 = h2;trav2 != NULL;trav2=trav2->next)
			if(trav1->data == trav2->data)
				head=Insert(head,trav1->data);
	
	int f;
	for(trav1 = h1;trav1!=NULL; trav1=trav1->next)
	{
		f=0;
		trav3=head;
		while(trav3)
		{
			if(trav1->data == trav3->data)
			{
				f=1;break;
			}
			trav3=trav3->next;
		}
		
		/*
		for(trav3 = head;trav3!=NULL;trav3=trav3->next)
			if(trav1->data == trav3->data)
				f=1;*/
				
		if(f==0)
			head=Insert(head,trav1->data);
	}
	
	for(trav2 = h2;trav2!=NULL; trav2=trav2->next)
	{
		f=0;
		trav3=head;
		while(trav3)
		{
			if(trav2->data == trav3->data)
			{
				f=1;break;
			}
			trav3=trav3->next;
		}
		if(f==0)
			head=Insert(head,trav2->data);
	}
	
	Deletesame(head);
	return head;
}

NODE_T * Intersect(NODE_T * h1,NODE_T * h2)
{
	printf("\n%s\n",__FUNCTION__);
	NODE_T *head=NULL;
	NODE_T * trav1 = h1,*trav3 = head, *trav2 = h2;
	for(trav1 = h1;trav1 !=NULL;trav1=trav1->next)
		for(trav2 = h2;trav2 != NULL;trav2=trav2->next)
			if(trav1->data == trav2->data)
				head=Insert(head,trav1->data);
	
	Deletesame(head);
	return head;
}

void Deletesame(NODE_T * head)
{
	NODE_T * delNode = NULL, *traverse = head;
	
	do
	{
		if(traverse->next &&traverse->data == traverse->next->data)
		{
			delNode = traverse->next;
			traverse->next= delNode->next;
			delNode->next=NULL;
		}
		traverse=traverse->next;
	}while(traverse);
	
}

int main()
{
	int n;
	NODE_T *h1,*h2,*h3,*h4;
	printf("Enter Number of elements  in each list:\t");
	scanf("%d",&n);
	h1=Create(n);
	h2=Create(n-1);
	Display(h1);Display(h2);
	h3 = Unionl(h1,h2);
	printf("\nUNION :");
	Display(h3);
	h4 = Intersect(h1,h2);
	printf("\nINTERSECTION :");
	Display(h4);
	Free(&h1);
	Free(&h2);
	Free(&h3);
	Free(&h4);
}
