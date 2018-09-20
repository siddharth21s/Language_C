/*enter number of rows
5

        * * * * * * * * *
        * * * *   * * * *
        * * *       * * *
        * *           * *
        *               *
 */

#include<stdio.h>
#include<conio.h>

int main()
{
	int r;
	printf("enter number of rows\n");
	scanf("%d",&r);
	printf("\n");
	pattern(r);
	return 0;
	
}


int pattern(int rr)
{
	int i,j,k;
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
