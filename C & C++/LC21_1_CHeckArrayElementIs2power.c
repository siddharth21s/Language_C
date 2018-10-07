#include<stdio.h>

int main()
{
	int a[10],i,j,k;
	printf("Enter 10 numbers\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	if(ispow(a))
		printf("Array does contain element 2's power'");
	else
		printf("Array does not contain element 2's power'");
}

int ispow(int a[])
{
	int i;
	for(i=0;i<=9;i++)
		if((a[i]&(a[i]-1))==0)
			return 1;
	return 0;

}
