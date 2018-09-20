/*Enter a number
10
Number of zero's are 30*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int no,i=1,j=0,x=1;
	printf("Enter a number\n");
	scanf("%d",&no);
	//while(i<=no)
	for(i=0;i<sizeof(int)*8;i++)
	{
		
		if((no&x)==0)
		{
			j++;
		}
		//sizeof(int)*8; use this: for(i=0;i<sizeof(int)*8;i++;x=x<<1)
		// if((no&x)==0) j++
		//i=i<<1;
		x=x<<1;
		
	}
	printf("Number of zero's are %d",j);
	return 0;
}
