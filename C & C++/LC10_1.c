/*
Enter a number
6
no of '1's are 2


*/
#include<stdio.h>
#include<conio.h>

int main()
{
	int no,i=1,j=0;
	printf("Enter a number\n");
	scanf("%d",&no);
	while(i<=no)
	{
										//other optimization we can 	
		if(no&i)
		{
			j++;
		}
		
		i=i<<1;
	}
	printf("no of '1's are %d",j);
	return 0;
}
