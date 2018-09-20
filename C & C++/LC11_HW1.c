/*Enter start aplabet :   A

Enter number of rows :  5
        A
      A B A
    A B C B A
  A B C D C B A
A B C D E D C B A*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int r;
	char c;
	printf("Enter start aplabet :\t");
	scanf("%c",&c);
	printf("\nEnter number of rows :\t");
	scanf("%d",&r);
	printf("\n");
	pattern(r,c);
	return 0;
	
}


void pattern(int rr,char cc)
{
	int i,j;
	for(i=1;i<=rr;i++)
	{
		printf("\n");
		for(j=1;j<=rr-i;j++)
			printf("  ");
		
		for(j=i*-1;j<=2*i-1;j++)
		{
			if(j&& (j!=-1)&&(j<=i))
			{
				printf("%c ", cc-abs(j)+i);
			}
			
		}
	printf("\n");
	}

}
