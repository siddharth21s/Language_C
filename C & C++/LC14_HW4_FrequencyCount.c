#include<stdio.h>

int main()
{
	int n,i=1,c;
	printf("Eneter No except'0': \t");
	scanf("%d",&n);
	printf("Start : \n");
	while(i!=0)
	{
		scanf("%d",&i);
		if(i==n)
			c=c+1;
		//printf("%d",i);
	}
	printf("\nFerquency of %d is %d",n,c);
}
