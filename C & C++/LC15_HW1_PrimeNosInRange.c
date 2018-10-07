#include<stdio.h>
main()
{
	int l,u;
	printf("Enter lower bound and upper bound\n");
	scanf("%d%d",&l,&u);
	printf("Prime no's :");
	if(l>u)
		prime(u,l);
	else
		prime(l,u);
}

prime(int l,int u)
{
	int i;
	for(i=l;i<=u;i++)
	{
		if(abs(i)==2 || abs(i)==3||abs(i)==5)
			printf("%d   ",i);
		else if(i%2==0 || i%3==0 || i%5==0)
			continue;
		else
			printf("%d   ",i);
	}
	return 70000;
}
