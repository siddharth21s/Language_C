#include<stdio.h>
#include<stdlib.h>

int main()
{
	int st[100];
	int *top,index=-1,ch=2;
	while(ch<4 && ch>0)
	{
		printf("Stack operations:\n1.Push\n2.Pop\n3.Peep\nEnter choice:\t");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:pop(st,&index);break;
			case 2:push(st,&index);break;
			case 3:peep(st,&index);break;
		}
	}
}

int pop(int st[],int *i)
{
	if(isempty(*i))
	{
		(*i)--;
	}
	else
		printf("Stack Empty\n")
}

int push(int st[],int *i)
{
	int ele;
	if(isfull(*i))
	{
		printf("Enter element:");
		scanf("%d",st[*i]);
		(*i)++;
	}
	else
	{
		printf("Stack is full\n");
		return;
	}
}

int isempty(int i)
{
	if(i>-1)
		return 1;
	else
		return 0;
}

int isfull(int i)
{
	if(i==99)
		return 0;
	else
		return 1;
}

int peep(int st[],int *i)
{
	if(isempty(*i))
	{
		printf("%d",st[])
	}
}
