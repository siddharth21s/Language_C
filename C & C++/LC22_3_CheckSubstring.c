#include<stdio.h>

int len(char a[]) 
{
	int i=0;while(a[i]!='\0')	i++; return i;
}

int substr(char a[],char b[])
{
	int i=0,j=0,k,l;
	k=len(a);	l=len(b);
	if(k>l)
	{
		i=0;j=0;
		while(j<=l && i<=k)
		{
			if(a[i] == b[j])
			{
				i++;j++;
			}
			else if(a[i]!=b[j])
			{
				j=0;
				while(a[i] != b[j])
					i++;
			}
			if(j==l)
				return 1;
			else if(i==k)
				return 0;
		}
	}
	else if(l>k)	return substr(b,a);
	else return 0;
}


int main()
{
	int i,k;
	char a[100],b[100];
	printf("Enter 1 string\n");
	scanf("%s",a);
	printf("Enter 2 string\n");
	scanf("%s",b);
	printf("Result : One of the strings are substring of the other =>\t");
	if(substr(a,b))
		printf("True");
	else 
		printf("False");
}
