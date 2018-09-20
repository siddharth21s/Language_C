/*enter number of rows
3

1
1       1
1       1       1*/

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
	int i,j;
	for(i=1;i<=rr;i++)
	{
		for(j=1;j<=i;j++)
		printf("1\t");
	
	printf("\n");
	}

}
