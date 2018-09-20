/*Enter two number
10
15
the numbers differ in '1' bits in 2 positions
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int n1,n2,i,j=0,x=1,k;
	printf("Enter two number\n");
	scanf("%d%d",&n1,&n2);
	for(i=0;i<sizeof(int)*8;i++)
	{
		
		if((n1&x)^(n2&x))
		{
			j++;
			k=i;
		}
		x=x<<1;
		
	}
	
	if(j>1)
		printf("the numbers differ in '1' bits in %d positions\n",j);
	else if(j==1)
		printf("the numbers can be qual if we change no %d bit in the second number\n",k+1);
	else
		printf("the numbers are same\n");	
	
	return 0;
}
