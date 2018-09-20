/*Enter start aplabet :   A

Enter number of rows :  3

A
A       B
A       B       C*/


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


void pattern(int rr, char cc)
{
	int i,j,k; k=cc;
	for(i=1;i<=rr;i++)
	{
		for(j=0;j<i;j++)
		printf("%c\t",cc+j);
	cc=k;
	printf("\n");
	}

}
