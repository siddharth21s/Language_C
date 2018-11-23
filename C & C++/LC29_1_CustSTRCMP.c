#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * create(int l);
int strcmpt(char *x,char *y,int l);
void accept(char *x);
void disp(char *x);
void freed(char **x);


int main()
{
	int n,k,l,r=0,g;
	char *x,*y,c;
	c=' ';
	//for(int i=-129;i<130;i++)
	printf("%d1\n",c);
	printf("Enter no  of characters in 1st String:\t");
	scanf("%d",&k);
	x=create(k);
	accept(x);
	disp(x);
	printf("Enter no  of characters in 2nd String:\t");
	scanf("%d",&l);
	y=create(l);
	accept(y);
	disp(y);
	printf("Enter no  of characters to be compared:\t");
	scanf("%d",&g);
	if(g>k && g>l)
		printf("Cant compare");
	else
		r=strcmpt(x,y,g);
	freed(&x);
	freed(&y);
	if(r)
		printf("Result : True");
	else
		printf("Result : False");
}

char *create(int l)
{
	char *x;
	x=(char *)malloc(l*sizeof(char));
	return x;
}

int strcmpt(char *x, char *y,int l)
{
	for(int i=0;i<l;i++)
		if(x[i]!=y[i])
			return 0;
	return 1;
}

void accept(char *x)
{
		scanf("%s",x);
}

void disp(char *x)
{
		printf("%s\n",x);
}

void freed(char ** x)
{
	free(*x);
	x=NULL;
}
