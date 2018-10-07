#include<stdio.h>

int main()
{
	int i,a[10],min;
	printf("Enter elements:\n");
	for(i=0;i<10;i++)
	{
		printf("No%d:\t",i);
		scanf("%d",&a[i]);
	}
	min=secmin(a);
	printf("Result:  %d",min);
}

int secmin(int aa[])
{
	int min1,min2,i;
	min1=aa[0];
	min2=aa[1];
	for(i=0;i<=10;i++)
	{
		if(min1>aa[i])
		{
			min2=min1;
			min1=aa[i];
		}
			
	}
	return min2;
}
