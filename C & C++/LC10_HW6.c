/*
Enter number of rows :  9

        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
  4 3 2 1 2 3 4
    3 2 1 2 3
      2 1 2
        1
*/


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
