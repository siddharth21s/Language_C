#include<stdio.h>

int main()
{
	int i,j,k,n;
	printf("Enter number of elemnets  in an array:\t");
	scanf("%d",&n);
	printf("Enter Elements:\n");
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter Key value to be found\t");
	scanf("%d",&k);
	j=found(a,k,n);
	if(j==-1)
		printf("Result: -1 :Element not found");
	else
		printf("Result: %d",j);
		
}

int found(int a[],int k,int n)
{
	for(int i=0;i<n;i++)
		if(a[i]==k)
			return i+1;
	return -1;
}
