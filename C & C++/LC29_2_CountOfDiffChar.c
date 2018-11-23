#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char * create(int l);
void swap(char *x,int n,int *vow,int *con,int *dig,int *word, int *oth);
void accept(char *x);
void disp(char *x);
void freed(char **x);

void freed(char **x)
{
	free(*x);
	x=NULL;
	printf("Memory free");
	
}


char *create(int l)
{
	char *x;
	x=(char *)malloc(l*sizeof(char));
	return x;
}

void swap(char *x,int n,int *vow,int *con,int *dig,int *word, int *oth)
{
	for(int i=0;i<n;i++)
	{
		if(x[i]=='\0')
			break;
		else if(x[i]=='a'|| x[i]=='e' ||x[i]=='i' ||x[i]=='o' ||x[i]=='u' ||x[i]=='A' ||x[i]=='E' ||x[i]=='I' ||x[i]=='O' ||x[i]=='U')
		{
			(*vow)++;
		}
		else if(x[i]>=48 && x[i]<=57)
			(*dig)++;
		
		else if((x[i]>=97 && x[i]<=122) || (x[i]>=65 && x[i]<=90))
			(*con)++;
		
		else if(x[i]==32)
			(*word)++;
		else
			(*oth)++;
	}
}

int main()
{
	int n,vow=0,con=0,dig=0,word=1,oth=0;
	char *x;
	printf("Enter no  of characters in 1st String:");
	scanf("%d",&n);
	char c;
	scanf("%c",&c);
	x=create(n+1);
	accept(x);
	disp(x);
	swap(x,n,&vow,&con,&dig,&word,&oth);
	printf("string:\n");
	disp(x);
	printf("\nVowels: %d\nConsonants: %d\nDigits: %d\nWords: %d\nOther: %d",vow,con,dig,word,oth);
	freed(&x);
}

void accept(char *x)
{
		scanf("%[^\n]s",x);
}

void disp(char *x)
{
		printf("%s\n",x);
}
