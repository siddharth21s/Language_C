#ifndef QUEUE_H
#define QUEUE_H


struct Queue
{
	int data;
	struct Queue *next;
};

typedef struct Queuepointers
{
	struct Queue * front;
	struct Queue * rear;
}QUEUE_T;

void Enqueue(QUEUE_T * qt,int data);
int Dequeue(QUEUE_T * qt);
_Bool isEmpty(QUEUE_T * qt);
void FreeQ(QUEUE_T * qt);
#endif
