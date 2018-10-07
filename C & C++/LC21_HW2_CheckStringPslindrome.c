#include<stdio.h>

int main()
{
	int i;
	char a[100];
	printf("Enter string\n");
	scanf("%s",a);
	i=palin(a);
	if(i)
		printf("%s is a Palindrome",a);
	else
		printf("%s is not a Palindrome",a);
}

int palin(char a[])
{
	int i=0,j,k;
	while(a[i]!='\0')
		i++;
	k=i;
	for(j=0;j<i;j++,i--)
		if(a[i-1]!=a[j])
			return 0;
	return 1;
}
