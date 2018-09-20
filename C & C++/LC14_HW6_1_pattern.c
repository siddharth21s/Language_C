#include<stdio.h>
#include<conio.h>

int main()
{
	int ch,x,y,i,j;
	do
	{
		printf("1. \n*\n*\t*\n*\t*\t*\n*\t*\t*\t*\n2.\n\t\t\t*\n\t\t*\t*\n\t*\t*\t*\n*\t*\t*\t*\n3. \n\t\t*\n\t*\t*\t*\n*\t*\t*\t*\t*\n \n4. \n1\n1\t2\n1\t2\t3\n5. \n\n\t\t1\n\t2\t1\t2\n3\t2\t1\t2\t3\n\n6.Stop\nEnter your choice \n");
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
		printf("*\t");
	
	printf("\n");
	}
}

int two()
{
	int i,j,rr;
	printf("enter number of rows\n");
	scanf("%d",&rr);
	for(i=1;i<=rr;i++)
	{
		for(j=1;j<=rr-i;j++)
			printf("\t");
		for(j=1;j<=i;j++)
			printf("*\t");
	printf("\n");
	}
}

int three()
{
	int i,j,rr;
	printf("enter number of rows\n");
	scanf("%d",&rr);
	for(i=1;i<=rr;i++)
	{
		
		for(j=1;j<=rr-i;j++)
			printf("\t");
		for(j=2;j<=2*i;j++)
			printf("*\t");
		
	
	
	printf("\n");
	}
}

int four()
{
	int i,j,rr;
	printf("enter number of rows\n");
	scanf("%d",&rr);
	for(i=1;i<=rr;i++)
	{
		for(j=1;j<=i;j++)
		printf("%d\t",j);
	
	printf("\n");
	}
}

int five()
{
	int i,j,rr;
	printf("enter number of rows\n");
	scanf("%d",&rr);
	for(i=1;i<=rr;i++)
	{
		
		for(j=1;j<=rr-i;j++)
			printf("\t");
		for(j=i*-1;j<=2*i-1;j++)
		{
			if(j&& (j!=-1)&&(j<=i))
			{
				printf("%d\t", abs(j));
			}
			else
			{
				;
			}
			
		}
	
	printf("\n");
	}
}
