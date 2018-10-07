#include<stdio.h>
main()
{
	int n,m,x;
	printf("Enter two numbers\n");
	scanf("%d%d",&n,&m);
	x=gcd(n,m);
	printf("GCD: %d",x);
}

gcd(int n,int m)
{
	int x;
	if(m==n)
		return n;
	else if(n>m)
		return gcd(n-m,m);
	else
		return gcd(n,m-n);
}
