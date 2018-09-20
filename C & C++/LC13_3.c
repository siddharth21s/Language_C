//swap of bits

#include<stdio.h>
#include<conio.h>

int main()
{
	int no1,no2,i=1,j=0,t1,t2,t3,t4;
	printf("Enter two numbers\n");
	scanf("%d%d",&no1,&no2);
	printf("Enter a position\n");
	scanf("%d",&i);
	printf("Enter a step count\n");
	scanf("%d",&j);
	
	i=((1<<j)-1)<<(i-j);
	
	t1=no1&i; t2=no2&(~i);
	t3=no2&i; t4=no1&(~i);
	no2=t1|t2;
	no1=t3|t4;
	
	printf("%d   %d",no1,no2);
}
	
