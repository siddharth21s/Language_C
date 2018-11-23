#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * create(int l);
void swap(char *x,char *y);
void accept(char *x,int n);
void disp(char *x,int n);

char *create(int l)
{
	char *x;
	x=(char *)malloc(l*sizeof(char));
	return x;
}

void swap(char *x, char *y)
{
	char *temp;
	temp=x;
	x=y;
	y=temp;
}

int main()
{
	int n,k,l,r,g;
	char *x,*y;
	printf("Enter no  of characters in 1st String:\t");
	scanf("%d",&k);
	x=create(k);
	accept(x,k);
	disp(x,k);
	printf("Enter no  of characters in 2nd String:\t");
	scanf("%d",&l);
	y=create(l);
	accept(y,l);
	disp(y,l);
	
	swap(x,y);
	printf("1st string:\n");
	disp(x,l);
	printf("2nd string:\n");
	disp(y,k);
}

void accept(char *x,int n)
{
	//for(int i=0;i<n;i++)
		scanf("%s",x);
}

void disp(char *x,int n)
{
	//for(int i=0;i<n;i++)
		printf("%s",x);
}
