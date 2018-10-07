#include<stdio.h>
main()
{
	int n,x=1,c;
	printf("Enter a number:\t");
	scanf("%d",&n);
	c=zero(n,x);
	printf("no of '0' bits: %d",c);
}

zero(int n,int x)
{
	int m=1<<(sizeof(int)*8-1);
	if(x==m)
		return 0;
	else if(n&x || x<m)
		return zero(n,x<<1);
	else
		return 1+zero(n,x<<1);
}


