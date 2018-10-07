#include<stdio.h>

int main()
{
	int a[10],i,f=0,j,k=0;
	printf("Enter sequence of 10 Nos\n");
	for(i=0;i<10;i++)
		scanf("%d",&a[i]);
	
	for(i=0;i<5;i++)
		if(a[i]!=a[9-i])
			f=1;
	
	for(i=0;j=9;i<j;i++,j--)
		if(a[i]!=a[j])
			k=1;
	
	if((f==1) && (k==1))
		printf("Result: Not a Palindrome");
	else
		printf("Result: Is a Palindrome");
}
