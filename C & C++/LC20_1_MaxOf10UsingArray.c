#include<stdio.h>

int main()
{
	int i,a[10],max;
	printf("Enter elements:\n");
	for(i=0;i<10;i++)
	{
		printf("No%d:\t",i);
		scanf("%d",&a[i]);
	}
	max=smax(a);
	printf("Result:  %d",max);
}

int smax(int aa[])
{
	int max,i;
	max=aa[0];
	for(i=0;i<=10;i++)
	{
		if(max<aa[i])
			max=aa[i];
		
			
	}
	return max;
}
