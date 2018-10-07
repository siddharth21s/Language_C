#include<stdio.h>

int main()
{
	int i=1;
	char *p=&i;
	if(*p==1)
		printf("memory architecture: Lil Endian");
	else
		printf("memory architecture: Big Endian");
}
