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
	{
		scanf("%d",&(*(a+i)));
	}
	min=smin(a,n);
	printf("Result:  %d",min);
}

int smin(int *p,int n)
{
	int m1,m2,i;
	m1=*p;m2=*(p+1);
	for(i=0;i<n;i++)
	{
		if(m1>*(p+i))
		{
			m2=m1;
			m1=*(p+i);
		}
	}
	return m2;
}
