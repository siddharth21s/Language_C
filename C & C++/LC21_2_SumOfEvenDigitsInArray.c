#include<stdio.h>

int main()
{
	int a[10],i,j,k;
	printf("Enter 10 numbers\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	j=evesum(a);
	printf("Sum of even numbers is :%d",j);
}

int evesum(int a[])
{
	int i,sum=0;
	for(i=0;i<=9;i++)
		if((a[i]&1)==0)
			sum+=a[i];
	return sum;

}
