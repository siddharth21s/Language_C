/*enter number of rows
7
                                                *
                                        *       *       *
                                *       *       *       *       *
                        *       *       *       *       *       *       *
                *       *       *       *       *       *       *       *       *
        *       *       *       *       *       *       *       *       *       *       *
*       *       *       *       *       *       *       *       *       *       *       *       */
#include<stdio.h>
#include<conio.h>

int main()
{
	int r;
	printf("enter number of rows\n");
	scanf("%d",&r);
	pattern(r);
	return 0;
	
}


int pattern(int rr)
{
	int i,j;
	for(i=1;i<=rr;i++)
	{
		
		for(j=1;j<=rr-i;j++)
			printf("\t");
		for(j=2;j<=2*i;j++)
			printf("*\t");
		
	
	
	printf("\n");
	}

}
