/*Enter a number
1899
Enter a position
7
Enter a step count
4
1795*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int no,i=1,j=0;
	printf("Enter a number\n");
	scanf("%d",&no);
	printf("Enter a position\n");
	scanf("%d",&i);
	printf("Enter a step count\n");
	scanf("%d",&j);
	
	i=~(((1<<j)-1)<<(i-j));//i=1<<j; i=i-1; i=i<<i-j; i=~i;
	no=no&i;
	printf("%d",no);
}
