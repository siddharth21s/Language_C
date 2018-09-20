#include<stdio.h>

int main()
{
	int n,i;
	printf("Enter a number\t");
	scanf("%d",&n);
	unsigned int x=1;
	x=abs(x<<((sizeof(int)*8)-1));					//2147483648;//int y=(sizeof(int))*8;//x= x<<y;//printf("%d & %d\n",y,x);
	for(i=1;i<=(sizeof(int))*8;i++)					//x=x>>1)
	{												//printf("%d & %d\n",x,n);
		if(x&n)
			printf("1");
		else
			printf("0");
		x=x>>1;
	}												//while(x>0);
}
