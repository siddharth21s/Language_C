#include<stdio.h>

int main()
{
	int a,b,c,d,n;
	do
	{
		printf("1. Add\n2. Sub\n3. Mul\n4. Stop\nEnter your choice\n");
		scanf("%d",&n);
		switch(n)
		{
			case 1: printf("Welcome to Add\nEnter real and imaginary part of first number\n");
			scanf("%d%d",&a,&b);printf("%d+%di\n",a,b);
			printf("Enter real and imaginary part of second number\n");
			scanf("%d%d",&c,&d);printf("%d+%di\n",c,d);
			printf("Result : %d + %di\n",a+c,b+d);break;
			
			case 2: printf("Welcome to Sub\nEnter real and imaginary part of first number\n");
			scanf("%d%d",&a,&b);printf("%d+%di\n",a,b);
			printf("Enter real and imaginary part of second number\n");
			scanf("%d%d",&c,&d);printf("%d+%di\n",c,d);
			printf("Result : %d + %di\n",a-c,b-d);break;
			
			case 3: printf("Welcome to Mul\nEnter real and imaginary part of first number\n");
			scanf("%d%d",&a,&b);printf("%d+%di\n",a,b);
			printf("Enter real and imaginary part of second number\n");
			scanf("%d%d",&c,&d);printf("%d+%di\n",c,d);
			printf("Result : %d + %di\n",a*c - b*d,a*d+c*b);break;
			
			case 4: break;
			default:printf("****Invalid choice****\n");break;
		}
	}while(n!=4);
}
