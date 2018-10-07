#include<stdio.h>

int main()
{
	int i,j,k;
	char a[100];
	printf("Enter a string:\t");
	scanf("%s",a);
	printf("Enter start value:\t");
	scanf("%d",&i);
	printf("Enter end value:\t");
	scanf("%d",&j);
	printf("Enter step value:\t");
	scanf("%d",&k);
	printf("Result: ");
	
	if(j==-1)
		printf("%s",a);
	else if(i-j>0)
		for(;i>j;i=i+k)
			printf("%c",a[i]);
	else
		for(;i<j;i=i+k)
			printf("%c",a[i]);
}

