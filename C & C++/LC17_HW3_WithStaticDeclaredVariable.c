#include<stdio.h>
int call()
{
	static int x=10;
	x++;
	printf("%d",x);
}

main()
{
	call();call();call();
}
