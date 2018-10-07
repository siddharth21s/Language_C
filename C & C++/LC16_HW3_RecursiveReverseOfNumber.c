#include<stdio.h>

main()
{
	int n;
	printf("Enter no:\t");
	scanf("%d",&n);
	n= rev(n);
	printf("%d",n);
}

rev(int n)
{
	int i,j,s;
	if(n<10)
		return n;
	else
	{
		printf("%d",n%10);
		return rev(n/10);
	}
}
