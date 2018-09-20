#include<stdio.h>
#include<conio.h>

int main()
{
	int r;
	printf("enter number of rows\n");
	scanf("%d",&r);//r=r-1;
	pattern(r);
	return 0;
	
}

int pattern(int rr)
{
	int i,j,k,l=0;
	for(i=0;i<=rr;i++)
	{
		k=1;
		for(j=0;j<rr-i;j++)
		{
			if(0&&i)
					printf("\t");
				else
					printf("\t");
			
		}
		for(j=0;j<i;j++,l++)
		{
				printf(" %d\t",k);
				if(k>9)
					printf("\t");
				else
					printf("\t");
				k=k*(i-j)/(j+1);
			//}
			//printf("%d ",k);
			//k=k*(i-j)/(j+1);
		}
	
	printf(" 1\n\n");
	}
}


/*int pattern(int rr)
{
	int i,j,k;
	for(i=0;i<=rr;i++)
	{
		for(j=1;j<=rr-i;j++)
			printf("  ");
		//if(i==0)
		//	printf("1\n");
		//for(j=-i;j<i;j++)
		{
		//	k=abs(i-j);

		for(j=1;j<=rr-i;j++)
			printf("  ");
		
		for(j=i*-1;j<=2*i;j++)
		{
			if(j&& (j!=-1)&&(j<=i))
			{
				k=abs(i-j);
				if(k%2!=0)
				{
					printf("%d ",i*(k-2));
				}
			}
			
		}
		//printf("\n");
				
				
				/*if(j>1)
					printf("%d ",2*(i-1));
				else
					printf("%d ",j);
			}
			else
			{
				printf("  ");
			}
		}
		
	//if(i!=0)
	//printf("  1\t");
		printf("%d=i\n",i);
	}

}*/
