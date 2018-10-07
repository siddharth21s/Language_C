#include<stdio.h>

int main()
{
	int a[100],i,j,k,n;
	printf("Enter number of elemnets  in an array:\t");
	scanf("%d",&n);
	printf("Enter Elements:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	k=sumsq(a,n);
	printf("Result: %d",k);
}

int sumsq(int a[],int n)
{
	int sum=0,i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<a[i];j++)
			if((j*j)==a[i])
			{
				sum+=a[i];break;
			}
	}
	return sum;
}
