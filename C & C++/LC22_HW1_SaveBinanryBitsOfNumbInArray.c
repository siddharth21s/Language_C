#include<stdio.h>
int binarray(int n,int a[],int k);
int main()
{
	int n,i,k;
	k=8*sizeof(int);
	printf("Enter A number:\t");
	scanf("%d",&n);
	int a[k];
//	printf("k=%d",k);
	binarray(n,a,k);
}

int binarray(int n,int a[],int k)
{
	int x=1,i=0,t=9;
	while(i!=k)
	{
		if(n&x)
			a[i]=1;
		else
			a[i]=0;
		i++;
		x=x<<1;
	}
	printf("\n");
	for(i=k-1;i>=0;i--)
		printf("%d",a[i]);
}
