#include<stdio.h>
#include<conio.h>

int main()
{
	int ch,x,y,i,j;
	do
	{
		printf("1. \n1\n1\t1\n1\t1\t1\n1\t1\t1\t1\n2.\n\t\t\tA\n\t\tA\tB\n\tA\tB\tC\nA\tB\tC\tD\n3. \n\t\t*\n\t*\t*\t*\n*\t*\t*\t*\t*\n \n4. \n\n3\t2\t1\t2\t3\n\t2\t1\t2\n\t\t1\n\n\n5. \n    1\n  2 1 2\n3 2 1 2 3\n  2 1 2\n    1\n6.Stop\nEnter your choice \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : one();break;
			
			case 2 : two();break;
			
			case 3 : three();break;
			
			case 4 : four();break;
			
			case 5 : five();break;
			
			case 6 : break;
			
			default: printf("Invalid choice\n");break;
		}
		
	}while(ch!=6);
	
}

int one()
{
	int i,j,rr;
	printf("enter number of rows\n");
	scanf("%d",&rr);
	for(i=1;i<=rr;i++)
	{
		for(j=1;j<=i;j++)
		printf("1\t");
	
	printf("\n");
	}
}

int two()
{
	int i,j,k,rr;
	char c;
	printf("Enter start aplabet :\t");
	scanf("%c",&c);
	printf("\nEnter number of rows :\t");
	scanf("%d",&rr);
	for(i=1;i<=rr;i++)
	{
		k=c;
		for(j=0;j<i;j++)
		printf("%c\t",c+j);
	c=k;
	printf("\n");
	}
}

int three()
{
	int i,j,k,rr;
	char c;
	printf("Enter start aplabet :\t");
	scanf("%c",&c);
	printf("\nEnter number of rows :\t");
	scanf("%d",&rr);
	for(i=1;i<=rr;i++)
	{
		
		for(j=1;j<=rr-i;j++)
			printf("  ");
		
		for(j=i*-1;j<=2*i-1;j++)
		{
			if(j&& (j!=-1)&&(j<=i))
			{
				printf("%c ", c+abs(j)-1);
			}
			
		}
	printf("\n");
	}
}

int four()
{
	int i,j,rr;
	printf("enter number of rows\n");
	scanf("%d",&rr);
	for(i=rr;i>0;i--)
	{
		
		for(j=1;j<=rr-i;j++)
			printf("\t");
		
		for(j=i*-1;j<=2*i-1;j++)
		{
			if(j&& (j!=-1)&&(j<=i))
			{
				printf("%d\t", abs(j)); //printf("%c ", cc+abs(j)-1);
			}
			
		}
	printf("\n");
	}
}

int five()
{
	int rr;
	printf("\nEnter number of rows :\t");
	scanf("%d",&rr);
	if(rr&1)
		rr+=1;
	printf("\n");
	int i,j,k;k=rr/2; k=rr-k;
	for(i=1;i<=k;i++)
	{
		
		for(j=1;j<=k-i;j++)
			printf("  ");
		
		for(j=i*-1;j<=2*i-1;j++)
		{
			if(j&& (j!=-1)&&(j<=i))
			{
				printf("%d ", abs(j)); //printf("%c ", cc+abs(j)-1);
			}
			
		}
	printf("\n");
	}
	
	for(i=rr-k-1;i>0;i--)
	{
		
		for(j=0;j<=rr-k-i-1;j++)
			printf("  ");
		
		for(j=i*-1;j<=2*i-1;j++)
		{
			if(j&& (j!=-1)&&(j<=i))
			{
				printf("%d ", abs(j)); //printf("%c ", cc+abs(j)-1);
			}
			
		}
	printf("\n");
	}
}
