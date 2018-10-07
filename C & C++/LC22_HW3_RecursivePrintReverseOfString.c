#include<stdio.h>
int len(char a[]) 
{
	int i=0;while(a[i]!='\0')	i++; return i;
}

int rev(char a[],int k)
{
	if(k==-1)
		return 0;
	else
		printf("%c",a[k--]);
		rev(a,k);
		return 0;
}

int main()
{
	int i,k;
	char a[100];
	printf("Enter 1 string\n");
	scanf("%s",a);
	k=len(a);
	printf("Result: ");
	rev(a,k);
	
}
