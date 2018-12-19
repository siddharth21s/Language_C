#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "LC33_1_Stack.h"
#include<ctype.h>

int main()
{
	char exp[20],c,*tok;
	int i=0,no,res;
	printf("Enter Bracket sequence:\n");
	//scanf("%c",c);
	//printf("1111");
	scanf("%[^\n]s",exp);
	printf("Entered bracket sequence : %s\n",exp);
	STACK_T st;
	st.stack=NULL;
	Initstack(&st,20);
	tok = strtok(exp," ");

	while(tok)
	{
		if(tok[0]=='{'||tok[0]=='('||tok[0]=='[')
		{
			sscanf(tok, "%c", &no);
			//printf("no = %c\n", no);
			Push(&st, no);
		}
		else
		{
			i=0;
			switch(tok[0])
			{
				case '}':
					res = Pop(&st);
					if(res !='{')
						i=1;
				break;
				case ']':
					res = Pop(&st);
					if(res !='[')
						i=1;
				break;
				case ')':
					res = Pop(&st);
					if(res !='(')
						i=1;
				break;
			}
			if(i==1)
				break;
		}
		tok = strtok(NULL, " ");
	}
	if(i)
		printf("Result: Invalid\n");
	else
		printf("Result: Valid\n");
	Deinitstack(&st);
	
}

