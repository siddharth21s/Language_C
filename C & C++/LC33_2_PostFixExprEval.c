#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "LC33_1_Stack.h"
#include<ctype.h>

int main()
{
	char exp[20],c,*tok;
	int i,no,res;
	printf("Enter PostFix Expression:\n");
	//scanf("%c",c);
	//printf("1111");
	scanf("%[^\n]s",exp);
	printf("Entered Postfix : %s\n",exp);
	STACK_T st;
	st.stack=NULL;
	Initstack(&st,20);
	tok = strtok(exp," ");
	printf("Token=%s\n",tok);
	while(tok)
	{
		if(isdigit(tok[0]))
		{
			sscanf(tok, "%d", &no);
			printf("no = %d\n", no);
			Push(&st, no);
		}
		else
		{
			switch(tok[0])
			{
				case '+':
					res = Pop(&st)+Pop(&st);
					printf("\n Addition=> %d \n", res);
					Push(&st, res);
				break;
				case '*':
					res = Pop(&st)*Pop(&st);
					printf("\n Multiplication=> %d \n", res);
					Push(&st, res);
				break;
				case '-':
				{
					int no2 = Pop(&st);
					int no1 = Pop(&st);
					res = no1 - no2;
					printf("\n Subtraction=> %d \n", res);
					Push(&st, res);
				}
				break;
				case '/':
				{
					int no2 = Pop(&st);
					int no1 = Pop(&st);
					res = no1/no2;
					printf("\n Divsion is %d \n", res);
					Push(&st, res);
				}
				break;
			}
		}
		tok = strtok(NULL, " ");
		//printf("Token=%s\n", tok);
	}
	printf("Final Result = %d\n", Pop(&st));
	Deinitstack(&st);
}
