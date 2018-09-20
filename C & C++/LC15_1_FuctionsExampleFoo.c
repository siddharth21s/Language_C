#include<stdio.h>

foo()
{
	printf("foo called\n");
}

main()
{
	foo();
	foo(1,2);
	foo(1,2,3,4);
	return 0;
}
