#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int j=255;
void foo()
{
	int i=100;
	printf("%d\n",i);
	Increment();
	printf("%d\n",i);
	j--;
	Decrement();
	printf("%d  %d\n",i,j);
	i=Increment();
	printf("%d\n",sum());
	Increment();
	++i;
	printf("%d  %d\n",i,Increment());
}



int main(int argc, char *argv[]) {
	foo();
	return 0;
}
