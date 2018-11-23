#include<stdio.h>
int foo(int *o);

int main()
{
	int *p,k;
	printf("Enter no:\t");
	scanf("%d",&k);p=&k;
	printf("adress:%d,  Value:%d",p,*p);
	foo(p);
	printf("\n11");
}

int foo(int *o)
{
	printf("\nin foo:\t%d,  %d",*o,o);
	return 0;
}
