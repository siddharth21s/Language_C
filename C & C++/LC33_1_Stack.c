#include "LC33_1_Stack.h"
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

_Bool Initstack(STACK_T* const st, int size)
{
	if(NULL!=st && NULL==st->stack)
	{
		st->top=-1;
		st->size=size;
		st->stack=(int *)malloc(sizeof(int)*size);
		if(st->stack !=NULL)
			return true;
	}
	else
		return false;
}

void Deinitstack(STACK_T* const st)
{
	if(NULL!=st && NULL!=st->stack)
	{
		free(st->stack);
		st->stack=NULL;
		st->top=-1;
	}
}

void Push(STACK_T* const st, int data)
{
	if(st && st->stack && !Isfull(st))
	{
		st->stack[++st->top]=data;
	}
	
}
int Pop(STACK_T* const st)
{
	int t;
	if(st && st->stack && !Isempty(st))
	{
		t = st->stack[st->top--];
	}
	return t;
}

_Bool Isfull(STACK_T* const st)
{
	if (st && st->stack && st->top == st->size)
		return true;
	else
		return false;
}


_Bool Isempty(STACK_T* const st)
{
	if(st && st->stack && st->top ==-1)
		return true;
	else
		return false;
}

int Peep(STACK_T* const st)
{
	if(st && st->stack && !Isempty(st))
		return st->stack[st->top];
	else
		return 0;
}
