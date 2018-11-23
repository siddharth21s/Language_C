#include<stdio.h>
#include<stdlib.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int divd(int a,int b);
int mod(int a,int b);

int main()
{
	int i,a,b;
	int (*arr[5])(int a,int b)={add,sub,mul,divd,mod};//array of function pointers
	i=1;
	printf("Enter two numbers\n");
	scanf("%d%d",&a,&b);
	while(i<5 && i>-1)
	{
		printf("1.Addition\n2.Subtract\n3.Mult\n4.Divide\n5.Modulus\nEnter Choice:\t");
		scanf("%d",&i);i-=1;
		(*arr[i])(a,b);
	}
}

int add(int a, int b)
{
	printf("Addition:\n");
	printf("%d\n",a+b);
	return 0;
}

int sub(int a, int b)
{
	printf("Subtract:\n");
	printf("%d\n",a-b);
	return 0;
}

int mul(int a, int b)
{
	printf("Multiplication:\n%d\n",a*b);
	return 0;
}

int divd(int a, int b)
{
	printf("Division:\n%d\n",a/b);
	return 0;
}

int mod(int a, int b)
{
	printf("Mod:\n%d\n",a%b);
	return 0;
}

