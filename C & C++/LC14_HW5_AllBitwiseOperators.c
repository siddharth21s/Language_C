#include<stdio.h>
#include<conio.h>

int main()
{
	int ch,x,y,i,j;
	do
	{
		printf("1. Off entered bits'&'\n2. On Enetred bits'|'\n3. Toggle'^'\n4. Inversion'~'\n5. Left shift'<<'\n6. Right shift'>>'\n7. Stop\nEnter your choice \n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1 : printf("Welcome to And Bitwise\nEnter number and position and no of bits\n");
			scanf("%d%d%d",&x,&y,&j);
			i=((1<<j)-1)<<(y-j);x=x&(~i);
			printf("\nResult : %d\n",x);break;
			
			case 2 : printf("Welcome to Or bitwise\nEnter number and position and no of bits\n");
			scanf("%d%d%d",&x,&y,&j);
			i=((1<<j)-1)<<(y-j);x=x|i;
			printf("\nResult : %d\n",x);break;
			
			case 3 : printf("Welcome to Xor bitwise \nEnter number and position and no of bits\n");
			scanf("%d%d%d",&x,&y,&j);
			i=((1<<j)-1)<<(y-j);x=x^i;
			printf("\nResult : %d\n",x);break;
			
			case 4 : printf("Welcome to inversion bitwise \nEnter number\n");
			scanf("%d",&x);
			//i=((1<<j)-1)<<(y-j);x=x~i;
			printf("\nResult : %d\n",~x);break;
			
			case 5 : printf("Welcome to Left Shift\nEnter number and bits to shift\n");
			scanf("%d%d",&x,&y);
			printf("\nResult : %d\n",x<<y);break;
			
			case 6 : printf("Welcome to Right Shift \nEnter a number and bits to shift\n");
			scanf("%d%d",&x,&y);
			printf("\nResult : %d\n",x>>y);break;
			
			case 7 : break;
			
			default: printf("Invalid choice\n");break;
		}
		
	}while(ch!=7);
	
}
