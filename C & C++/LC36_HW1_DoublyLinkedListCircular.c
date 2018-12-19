#include <stdio.h>
#include <stdlib.h>
#include "LC36_DoublyLinkList.h"

NODE_T * Create(const size_t noOfNodes)
{
	NODE_T * head =NULL;
	printf("\n%s",__FUNCTION__);
	for(size_t i=1;i<=noOfNodes;i++)
	{
		int data=0;
		printf("\nEnter data to add at position %d:\t",i);
		scanf("%d",&data);
		head= Insert(head, i, data);
	}
	return head;
}
NODE_T * Insert(NODE_T * head,const size_t position,const  int data)//, size_t
{
	printf("\n%s",__FUNCTION__);
	NODE_T * temp = (NODE_T*)malloc(sizeof(NODE_T));
	if(NULL != temp)
	{
		temp->data = data;
		temp->next = NULL;
		temp->prev = NULL;
		if(NULL == head)
		{
			if(position !=1)
				printf("\nLinked List has no Nodes, inserting at first position");
			head=temp;
			temp->next=head;
			temp->prev=head;
			printf("\ntemp = %d \n",temp->data);
		}
		else //linked already has some nodesnow inserting
		{
			if(position == 1)
			{
				temp->next=head;
				head->prev=temp;//temp->next->prev=temp
				
				
				NODE_T * traverse = head;
				size_t pos = position;
				while(pos-2 !=0 && traverse->next != head)
				{
					traverse = traverse->next;
					pos--;
				}
				head=temp;
				traverse->next=temp;
				temp->prev=traverse;
			}
			else//Any othe position
			{
				NODE_T * traverse = head;
				size_t pos = position;
				while(pos-2 !=0 && traverse->next != head)
				{
					traverse = traverse->next;
					pos--;

				}
				if(pos-2 != 0)
				{
				printf("\nEntered position is out of range adding at last position\n");
				
				}
				//printf("\ntemp = %d \n",temp->data);
				temp->next=traverse->next;
				traverse->next=temp;
				temp->prev=traverse;
				if(temp->next)
					temp->next->prev=temp;
				else
					temp->next=head;
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
void Display(NODE_T *  head)
{
	printf("\n%s\n",__FUNCTION__);
	NODE_T * traverse = head;
	//printf("%d --> ",traverse->data);
	do
	{
		printf("%d --> ",traverse->data);
		traverse=traverse->next;

	}while(traverse != head );
	
	if(traverse == head)
		printf("back to first\n");
}
void Reversedisplay(NODE_T * head)
{
	printf("\n%s\n",__FUNCTION__);
	NODE_T * traverse = head->prev;
	
	do
	{
		printf("%d <-- ",traverse->data);
		traverse=traverse->prev;
		
	}while(traverse != head->prev);
	
	if(traverse == head->prev)
		printf("back to first\n");
}

NODE_T * Delete(NODE_T * head, const size_t position)
{
	printf("\n%s\n",__FUNCTION__);
	if (NULL != head)
	{
		NODE_T * delNode = NULL;
		if(position == 1)
		{
			delNode=head;
			head=head->next;
	
			delNode->next->prev = delNode->prev;
			delNode->prev->next = delNode->next;
			delNode->next=NULL;
			if(head)
				delNode -> prev = NULL;
			
		}
		else
		{
			NODE_T * traverse = head;
			size_t pos = position;
			while(pos-2 !=0 && traverse->next != head)
			{
				traverse = traverse->next;
				pos--;
				
			}
			if(pos-2 != 0 || traverse->next == head)
				printf("\nInvalid position, Node not to delete  at specified position\n");
			else
			{
				delNode = traverse->next;
				traverse->next= delNode->next;
				if (delNode->next)
					delNode->next->prev = traverse;
				delNode->prev=delNode->next=NULL;
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

NODE_T * Search(NODE_T * const head,const int data)
{
	NODE_T * traverse = head;
	int po=1;
	do
	{
		if(traverse->data == data)
		{
			printf("Entered Element is present in LinkList on position %d\n",po);
			return head;
		}
		traverse=traverse->next;
		po++;
		
	}while(traverse!= head);
	printf("Element Not found\n");
	return head;
}


int main(int argc, char *argv[]) 
{
	NODE_T *h = NULL;
	h=Create(1);
	Display(h);
	Search(h,3);
	Reversedisplay(h);
	h=Insert(h,6,10);
	h=Insert(h,1,20);
	Display(h);
	Search(h,3);
	h=Delete(h,1);
	Display(h);
	Free(&h);
}
