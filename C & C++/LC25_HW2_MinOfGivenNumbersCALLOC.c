#include<stdio.h>
#include<malloc.h>
int smin(int *p,int n);
int main()
{
	int i,*a,min,n,k;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	a=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
		scanf("%d",&(*(a+i)));
	min=smin(a,n);
	printf("Result:  %d",min);
}

int smin(int *p,int n)
{
	int min,i;
	min=*p;
	//printf("11");
	for(i=0;i<n;i++)
	{
		if(min>*(p+i))
			min=*(p+i);
	}
	return min;
}
