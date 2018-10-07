#include<stdio.h>
int checkrev(char a[],char b[]);

int leng(char a[]) 
{
	int i=0;while(a[i]!='\0')	i++; return i;
}

int main()
{
	int i,k;
	char a[100],b[100];
	printf("Enter 1 string\n");
	scanf("%s",a);
	printf("Enter 2 string\n");
	scanf("%s",b);
	if(checkrev(a,b))
		printf("2nd is reverse of 1st");
	else
		printf("2nd is not a reverse of 1st");
}

int checkrev(char a[],char b[])
{
	int i=0,j=0,k,l;
	k=leng(a);	l=leng(b);
	if(k==l)
	{
		while(i<=k && l>=0)
		{
			if(a[i]!=b[l-1])
				return 0;
			i++;l--;
		}
		return 1;
	}
	else return 0;
}
