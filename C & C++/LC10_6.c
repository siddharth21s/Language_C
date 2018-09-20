/*enter number of rows
7
1
1       2
1       2       3
1       2       3       4
1       2       3       4       5
1       2       3       4       5       6
1       2       3       4       5       6       7
*/
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
		for(j=1;j<=i;j++)
		printf("%d\t",j);
	
	printf("\n");
	}

}
