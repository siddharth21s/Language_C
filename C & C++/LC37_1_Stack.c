#include "LC37_1_Stack.h"
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
		head= Push(head,data);
	}
	return head;
}

NODE_T * Push( NODE_T * head,int data)	// size_t,
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
			temp->next=head;
			head=temp;
				
				
		
			/*else//Any othe position
			{
				NODE_T * traverse = head;
				size_t pos = position;
				while(pos-2 !=0 && traverse->next != NULL)
				{
					traverse = traverse->next;
					pos--;
					
				}
				if((pos-2) != 0)
				{
				printf("\nEntered position is out of range adding at last position\n");
				
				}
				//printf("\ntemp = %d \n",temp->data);
				temp->next=traverse->next;
				traverse->next=temp;
				//printf("\ntemp2 = %d \n",traverse->data);
				
			}*/
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

NODE_T * Pop(NODE_T * head)
{
	printf("\n%s\n",__FUNCTION__);
	if (NULL != head)
	{
		NODE_T * delNode = NULL;
	//	if(position == 1)
	//	{
			delNode=head;
			head=head->next;
			delNode -> next = NULL;
			
	//	}
		/*else
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
			
		}*/
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
		traverse = Pop(traverse);
	}
	*head = NULL;
}


NODE_T * Search( NODE_T *  head, int data)
{
	printf("\n%s",__FUNCTION__);
}

/*
int main()
{
	int n;
	NODE_T *h;
	printf("Enter Number of elements:\t");
	scanf("%d",&n);
	h=Create(n);
	Display(h);
	h=Insert(h,5,72);
	/*h=Insert(h,6,100);
	h=Insert(h,2,32);
	
	Display(h);
	Delete(h,5);
	Display(h);
	Free(&h);
}*/
