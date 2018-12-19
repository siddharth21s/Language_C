#include<stdio.h>
#include<stdlib.h>
#include "LC37_1_Stack.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	NODE_T * h=NULL;
	Create(1);
	Display(h);
	h=Push(h,5);
	h=Push(h,6);
	h=Push(h,4);
	h=Pop(h);
	Display(h);
}


