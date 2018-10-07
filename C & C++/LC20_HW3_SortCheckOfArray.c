#include<stdio.h>

int main()
{
	int a[10],i,f=0,p,k,l=0;
	printf("Enter 10 Nos\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	for(i=0;i<10;i++)
	{
		if(a[i]==a[i+1])
		{
			while(a[i]==a[i+1] || i==9)
				k=i++;
			l++;
		}
		else if(a[i]>a[i+1] && a[i]>=a[i-1])
		{
			p=i;i++;f++;
		}
	}
	if(f==0)
		printf("Numbers are sorted");
	else if(f==1 && l==1)
		printf("Numbers can be sorted with a swap in position %d and %d",p,k);
	else
		printf("Multiple positions need to be swapped to sort the numbers");
}
