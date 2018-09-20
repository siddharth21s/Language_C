/*
Enter number of rows :  7

      *
      * *
      * * *
* * * * * * *
  * * *
    * *
      *         */



#include<stdio.h>
#include<conio.h>

int main()
{
	int r;
	char c;
	//printf("Enter start aplabet :\t");
	//scanf("%c",&c);
	printf("\nEnter number of rows :\t");
	scanf("%d",&r);
	if(r&1)
		r+=1;
	printf("\n");
	pattern(r);
	return 0;
	
}


int pattern(int rr)  //void pattern(int rr,char cc)
{
	int i,j,k,l;k=rr/2; k=rr-k;
	
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
