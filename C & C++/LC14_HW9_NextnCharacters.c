#include<stdio.h>

int main()
{
	int n,i;
	char c;
	printf("Enter a character:\t");
	scanf("%[^\n]c",&c);
	printf("\nEnter number:\t");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%c  ",c+i);
	}
}
