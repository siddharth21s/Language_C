#include <stdio.h>
#include <stdlib.h>
long long Tick(int a, int b);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	long long res= Tick(10000,100000);
	printf("%d",res);
	return 0;
}
