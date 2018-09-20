#include<stdio.h>
#include<conio.h>

int main()
{
	int ch,x,y,i,j;
	do
	{
		printf("1. \n*           *\n* *       * *\n* * *   * * *\n* * * * * * * \n2.\n* * * * * * * * *\n* * * *   * * * *\n* * *       * * *\n* *           * *\n*               *\n3. \n\n    A\n  A B A\nA B C B A \n4. \n*\n* *\n* * *\n* *\n*\n5. \n\n      *\n    * *\n  * * *\n* * * * * * *\n      * * *\n      * *\n      *\n6.Stop\nEnter your choice \n");
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
	int i,j,rr,k;
	printf("enter number of rows\n");
	scanf("%d",&rr);
	for(i=1;i<=rr;i++)
	{
		
		printf("\t");
		
		for(j=rr*-1;j<=rr;j++)
		{
			
			k=abs(j);
			if(j && (j!=-1))
			{
				if(k>(rr-i))
					printf("* ");
				
				//for(k=;j<=rr-i;j++)
				else
					printf("  ");
				
			}
			
		}
	printf("\n");
	}
}

int two()
{
	int i,j,rr,k;
	printf("enter number of rows\n");
	scanf("%d",&rr);
	for(i=rr;i>=1;i--)
	{
		
		printf("\t");
		
		for(j=rr*-1;j<=rr;j++)
		{
			
			k=abs(j);
			if(j && (j!=-1))
			{
				if(k>(rr-i))
					printf("* ");
				
				//for(k=;j<=rr-i;j++)
				else
					printf("  ");
				
			}
			
		}
	printf("\n");
	}
}

int three()
{
	int i,j,k,rr;
	char c;
	printf("Enter start aplabet :");
	scanf("%[^\n]c",&c);
	printf("\nEnter number of rows :\t");
	scanf("%d",&rr);
	for(i=1;i<=rr;i++)
	{
		printf("\n");
		for(j=1;j<=rr-i;j++)
			printf("  ");
		
		for(j=i*-1;j<=2*i-1;j++)
		{
			if(j&& (j!=-1)&&(j<=i))
			{
				printf("%c ", c-abs(j)+i);
			}
			
		}
	printf("\n");
	}
}

int four()
{
	int i,j,k,rr;
	printf("\nEnter number of rows :\t");
	scanf("%d",&rr);
	if(rr&1)
		rr+=1;
	k=rr/2; k=rr-k;
	for(i=1;i<=k;i++)
	{
		printf("\t");
		for(j=1;j<=i;j++)
			printf("* ");
		printf("\n");
	}
	
	for(i=rr-k-1;i>0;i--)
	{
		printf("\t");
		for(j=1;j<=i;j++)
			printf("* ");
	printf("\n");
	}
}

int five()
{
	int i,j,k,rr;
	printf("\nEnter number of rows :\t");
	scanf("%d",&rr);
	if(rr&1)
		rr+=1;
	k=rr/2; k=rr-k;
	for(i=1;i<=k;i++)
	{
		
		for(j=1;j<=k-i;j++)
			printf("  ");
		
		for(j=i*-1;j<=2*i-1;j++)
		{
			if(j&&(j!=-1))
			{
				if((i==k)&&(j<=i)) 
				{
					printf("* ");
				}
			
				else if(j<=1)
				{
					printf("* "); //printf("%c ", cc+abs(j)-1);
				}
			}
			
		}
	printf("\n");
	}
	
	for(i=rr-k-1;i>0;i--)
	{
		
		for(j=k*-1;j<-1;j++)
			printf("  ");
		
		for(j=i*-1;j<=2*i-1;j++)
		{
			
			if(j&&(j!=-1)&&(j>0)&&(j<=i))
			{
				printf("* "); //printf("%c ", cc+abs(j)-1);
			}
			
		}
	printf("\n");
	}
}
