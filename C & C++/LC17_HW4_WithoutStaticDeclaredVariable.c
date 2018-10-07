#include<stdio.h>
int call()
{
	int x=10;
	x++;
	printf("%d",x);
}

main()
{
	call();call();call();
}
