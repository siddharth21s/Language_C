#include<stdio.h>
#include<conio.h>

int main()
{
	int no,i;
	printf("Enter no\t");
	scanf("%d",&no);
	i=no&(no-1);
	printf("%d",i);
}
