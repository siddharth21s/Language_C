#include<stdio.h>

main()
{
	int n;
	printf("Enter no:\t");
	scanf("%d",&n);
	n= sum(n);
	printf("%d",n);
}

sum(int n)
{
	int i,j,s;
	if(n<2)
		return n;
	else
	{
		//printf("%d",n%10);
		i=n-1;
		return n+sum(i);
	}
}
