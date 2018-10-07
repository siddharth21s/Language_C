#include<stdio.h>

int main()
{
	int a[100],j,k,n;
	printf("Enter number of elements:\t");
	scanf("%d",&n);
	printf("Enter Array %d\n",n);
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter number a element:\t");
	scanf("%d",&k);
	
	for(int i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(a[i]+a[j]==k)
				printf("(%d,%d)  ",a[i],a[j]);
}
