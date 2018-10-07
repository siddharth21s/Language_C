#include<stdio.h>

int main()
{
	int a[10],i,sum=0,k;
	printf("Enter 10 Nos\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
		sum= sum + checknum(a[i]);
	printf("Result: %d",sum);
	return 0;
}


int checknum(int n)
{
	int i,j=3;
	for(i=4;i>=0;i--)
		if(((n&(j<<i))>>i)==j)
			return n;
	return 0;
}
