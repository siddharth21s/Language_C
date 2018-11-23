#include<stdio.h>
#include<stdlib.h>

union T
{
	int i;
	char j;
	float k;
}f;

int main()
{
	f.i=511;
	printf("%d\n%d\n%f\n",f.i,f.j,f.k);
	
	f.i=1;
	if(f.j==1)
		printf("Architecture is Little Endian\n");
	else
		printf("Architecture is Big Endian\n");
	
}
