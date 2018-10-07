#include<stdio.h>
main()
{
	int n,c,r;
	printf("Enter a number:\t");
	scanf("%d",&n);
	printf("number of right most bits to toggle:\t");
	scanf("%d",&r);

	c=One(n,r,1);
	printf("result: %d",c);
}

One(int n,int r,int x)
{
	//int m=1<<(sizeof(int)*8-1);
	if(r==0)
		return n;
	else
	{
		n=n^x;
		return One(n,--r,x<<1);	
		
	}
}


