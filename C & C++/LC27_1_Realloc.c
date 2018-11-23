#include<stdio.h>
#include<stdlib.h>

int main()
{
	int *p,m=50;
	p=(int *)malloc(m*sizeof(int));
	int *n=realloc(p,70*sizeof(int));
	if(n==p)
		printf("Memory  Extended");
	else
		printf("Newly allocated");
}
