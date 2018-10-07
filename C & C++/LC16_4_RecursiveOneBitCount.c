#include<stdio.h>
main()
{
	int n,x=1,c;
	printf("Enter a number:\t");
	scanf("%d",&n);
	c=one(n,x);
	printf("no of 1 bits: %d",c);
}

one(int n,int x)
{
	int m=1<<(sizeof(int)*8-1);
	if(x==m)
		return 0;
	else if(n&x || x<m)
		return 1+one(n,x<<1);
	else
		return one(n,x<<1);
}
