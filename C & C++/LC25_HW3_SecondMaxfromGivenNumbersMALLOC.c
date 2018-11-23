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
	int m1,m2,i;
	m1=*p;m2=*(p+1);
	for(i=0;i<n;i++)
	{
		if(m1<*(p+i))
		{
			m2=m1;
			m1=*(p+i);
		}
	}
	return m2;
}
