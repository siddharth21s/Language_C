#include <stdio.h>
#include <stdlib.h>
void inc();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int i=0; // static global variable or functions have a scope limited to the file // marshelling and un marshelling
int main(int argc, char *argv[]) 
{
	printf("\n%d",i);
	inc();
	printf("\n%d",i);
	dec();
	inc();
	printf("\n%d",i);
	
	return 0;
}

void inc()
{
	i++;
	{
		int i=10;
		dec();
		i--;
		printf("\n%d",i);
	}
}
