#include<stdio.h>
#include<malloc.h>
int smax(int *p,int n);
int main()
{
	int i,*a,max,n,k;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",&(*(a+i)));
	}
	max=smax(a,n);
	printf("Result:  %d",max);
}

int smax(int *p,int n)
{
	int max,i;
	max=*p;
	//printf("11");
	for(i=0;i<n;i++)
	{
		if(max<*(p+i))
			max=*(p+i);
	}
	return max;
}
