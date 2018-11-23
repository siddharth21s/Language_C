#include<stdio.h>
#include<malloc.h>
int checknum(int n);

int main()
{
	int *a,i,sum=0,k,n;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&(*(a+i)));
	for(i=0;i<n;i++)
		sum= sum + checknum(*(a+i));
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
