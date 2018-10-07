#include<stdio.h>
main()
{
	int n,c,r;
	printf("Enter a number:\t");
	scanf("%d",&n);
	printf("number of right most bits");
	scanf("%d",&r);
	c=One(n,r,1);
	printf("no of rightmost '1' bits: %d",c);
}

One(int n,int r,int x)
{
	//int m=1<<(sizeof(int)*8-1);
	if(r==0)
		return 0;
	else if(n&x)
		return 1+One(n,--r,x<<1);
	else
		return One(n,--r,x<<1);
}


