#include<stdio.h>
#include<conio.h>

int main()
{
	int ch,x,y,i,j;
	do
	{
		printf("1. \n      *\n      * *\n      * * *\n* * * * * * *\n  * * *\n    * *\n      *\n\n2.\n      *\n    * * *\n  * * * * *\n* * * * * * *\n  * * * * *\n    * * *\n      *\n3.Stop\nEnter your choice \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : one();break;
			
			case 2 : two();break;
			
			case 3 : break;
			
			default: printf("Invalid choice\n");break;
		}
		
	}while(ch!=3);
	
}

int one()
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
			if(j&&(j!=-1)&&(j<=i))
			{
				
				if(i==k) 
				{
					printf("* ");
				}
				else if(j<0)
					printf("  ");
				
				else if(j>=1)
				{
					printf("* "); //printf("%c ", cc+abs(j)-1);
				}
			}
			
		}
	printf("\n");
	}
	
	for(i=1;i<=rr-k;i++)
	{
		for(j=k*-1;j<=2*i-1;j++)
		{
			if(j&&(j!=-1)&&(j<2))
			{
				if(abs(j)<(rr-k-i+1))
				{
					printf("* ");
				}
				else if(j<0)
				{
					printf("  "); //printf("%c ", cc+abs(j)-1);
				}
			}
		}
	printf("\n");
	}
}

int two()
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
			if(j&& (j!=-1)&&(j<=i))
			{
				printf("* ", abs(j)); //printf("%c ", cc+abs(j)-1);
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
				printf("* ", abs(j)); //printf("%c ", cc+abs(j)-1);
			}
			
		}
	printf("\n");
	}
}

