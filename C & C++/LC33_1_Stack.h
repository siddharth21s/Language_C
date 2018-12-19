#ifndef STACK_H
#define STACK_H

typedef struct
{
	int *stack;
	int top;
	int size;
}STACK_T;

// interface of stack
_Bool Initstack(STACK_T* const st, int size);
void Deinitstack(STACK_T* const st);
void Push(STACK_T* const st, int data);
int Pop(STACK_T* const st);
_Bool Isfull(STACK_T* const st);
_Bool Isempty(STACK_T* const st);
int Peep(STACK_T* const st);
#endif
