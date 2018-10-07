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
	max=secmax(a);
	printf("Max2:  %d",max);
}

int secmax(int aa[])
{
	int max1,max2,i;
	max1=aa[0];
	max2=aa[1];
	for(i=0;i<10;i++)
	{
		if(max1==aa[i])
		{
			max2=max1;
			max1=aa[i];
		}
		else if(max1<=aa[i])
		{
			max2=max1;
			max1=aa[i];
		}	
	}
	printf("Max1= %d\n",max1);
	return max2;
}
