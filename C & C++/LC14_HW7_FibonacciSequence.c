#include<stdio.h>

int main()
{
	int n,ps=1,ls=0,s,i;
	printf("Enter no for Fibonacci sequence\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		s=ls+ps;
		ps=ls; ls=s;
		printf("%d\t",s);
	}
}
