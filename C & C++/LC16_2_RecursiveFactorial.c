#include<stdio.h>
fact(int n)
{
	if(n<=1)
		return 1;
	else
		return n*fact(n-1);
		
}

main()
{
	int n;
	printf("Enter a no\t");
	scanf("%d",&n);
	n=fact(n);
	printf("Factorial : %d ",n);
}
