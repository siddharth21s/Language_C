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
	min=smin(a);
	printf("Result:  %d",min);
}

int smin(int aa[])
{
	int min,i;
	min=aa[0];
	for(i=0;i<=10;i++)
	{
		if(min>aa[i])
			min=aa[i];
		
			
	}
	return min;
}
