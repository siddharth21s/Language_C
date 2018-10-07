#include<stdio.h>

int main()
{
	int i=0,j,k;
	char a[100];
	printf("Enter string\n");
	scanf("%s",a);
	while(a[i]!='\0')
		i++;
	printf("Result: %d",i);
}
