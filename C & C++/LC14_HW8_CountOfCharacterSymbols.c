#include<stdio.h>
int main()
{
	int c=0,n=0,s=0;
	char ch=1,i;//f="EOF";
	printf("Enter crtl+Z twice to stop\nEnter character:\t");
	while(ch!=EOF)//do
	{
		//printf("\nEnter character:\t");
		ch=getchar();//scanf("%[^\n]c",&ch);
		//i=getchar();
		printf("%d\n",ch);
		if((ch<=90&&ch>=65)||(ch<=122&&ch>=97))
			c++;
		else if(ch>=48&&ch<=57)
			n++;
		else
			s++;
	
	}//while(ch!=f);
	printf("no of aplabets : %d\nno of digits : %d\nno of symbols entered : %d",c,n,s);
}
