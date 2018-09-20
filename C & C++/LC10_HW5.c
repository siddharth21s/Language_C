/*Enter number of rows :  3

3       2       1       2       3
        2       1       2
                1			*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int r;
	char c;
	printf("Enter start aplabet :");
	scanf("%[^\n]c",&c);
	printf("\nEnter number of rows :\t");
	scanf("%d",&r);
	printf("\n");
	pattern(r);
	return 0;
	
}


int pattern(int rr)  //void pattern(int rr,char cc)
{
	int i,j;
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
