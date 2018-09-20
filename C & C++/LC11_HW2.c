/*Enter number of rows :  5

        *
        * *
        * * *
        * *
        *
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
		printf("\t");
		for(j=1;j<=i;j++)
			printf("* ");
		printf("\n");
	}
	
	for(i=rr-k-1;i>0;i--)
	{
		printf("\t");
		for(j=1;j<=i;j++)
			printf("* ");
	printf("\n");
	}
	

}
