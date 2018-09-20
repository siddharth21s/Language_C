/*
enter number of rows
7
                                                1
                                        2       1       2
                                3       2       1       2       3
                        4       3       2       1       2       3       4
                5       4       3       2       1       2       3       4       5
        6       5       4       3       2       1       2       3       4       5       6
7       6       5       4       3       2       1       2       3       4       5       6       7     */
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
