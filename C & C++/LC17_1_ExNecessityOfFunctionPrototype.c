#include<stdio.h>

//float tick(float a,float b);

int main()
{
	float res = tick(1.2f,2.7f);
	printf("%f",res);
}

float tick(float a,float b)
{
	return a+b;
}
