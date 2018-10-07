#include<stdio.h>
main()
{
	int n,x=1,c;
	printf("Enter a number:\t");
	scanf("%d",&n);//n=n-2;
		//c=fibo(n,1,1);
		c=fibo(n);
		printf("Result:  %d",c);
}

/*fibo(int n,int l,int k)
{
	int s=0;
	s=l+k;
	k=l;l=s;//printf("%d  ",s);
	if(n==0)
		return s;
	else
		return fibo(--n,l,k);
	//printf("%d  ",s);
}*/

fibo(int n)
{
	if(n<=1)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);
}
