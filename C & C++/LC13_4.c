//right aligned numbers

#include<stdio.h>
#include<conio.h>

int main()
{
	int no,k=1,j=0,i;
	printf("Enter a number\n");
	scanf("%d",&no);
	printf("Enter a position\n");
	scanf("%d",&k);
	printf("Enter a step count\n");
	scanf("%d",&j);
	
	i=((1<<j)-1)<<(k-j);//i=1<<j; i=i-1; i=i<<i-j; i=~i;
	no=no&i;
	printf("%d",no);
	no= no>>(k-j);
	printf("\n%d",no);
}
