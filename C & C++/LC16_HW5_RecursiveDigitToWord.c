#include<stdio.h>

main()
{
	unsigned long long int n;
	printf("Enter no:\t");
	scanf("%d",&n);
	digit(n);
	//printf("%d",n);
}

digit(int n)
{
	int i,j,s;
	if(n<10)
		return word(n);
	else
	{
		//printf("%d",n%10);
		digit(n/10);
		return word(n%10);
	}
}

word(int n)
{
	switch(n)
	{
		case 0: printf("zero ");break;
		case 1: printf("one ");break;
		case 2: printf("two ");break;
		case 3: printf("three ");break;
		case 4: printf("four ");break;
		case 5: printf("five ");break;
		case 6: printf("six ");break;
		case 7: printf("seven ");break;
		case 8: printf("eight ");break;
		case 9: printf("nine ");break;
		default : printf("Not a digit");break;
	}
}
