//swap of bits and different position
/*Enter two numbers
10
15
Enter a position
3
Enter a position
2
Enter a step count
2
14   13*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int no1,no2,i=1,i1=1,j=0,t1,t2,t3,t4,k1,k2;
	printf("Enter two numbers\n");
	scanf("%d%d",&no1,&no2);
	printf("Enter a position\n");
	scanf("%d",&k1);
	printf("Enter a position\n");
	scanf("%d",&k2);
	printf("Enter a step count\n");
	scanf("%d",&j);
	if(j>k1)		//if the step count is greater than any of the positions entered
		j=k1;
	if(j>k2)
		j=k2;
	i=((1<<j)-1)<<(k1-j); 	
	i1=((1<<j)-1)<<(k2-j);
	t1=no1&i; t1=t1>>(k1-j); t1=t1<<(k2-j);
	t2=no2&i1; t2=t2>>(k2-j); t2=t2<<(k1-j);
	t3=no2&(~i1);
	t4=no1&(~i);
	no2=t1|t3;
	no1=t2|t4;
	
	printf("%d   %d",no1,no2);
}
	
