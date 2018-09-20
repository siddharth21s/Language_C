#include<stdio.h>
#include<conio.h>

int main()
{
	int n1,n2,i,c=0,j=0,x=1,k,no=0,b1,b2;
	printf("Enter two number\n");
	scanf("%d%d",&n1,&n2);
	
	
	for(i=0;i<sizeof(int)*8;i++,x=x<<1)
	{
		b1=n1&x; b2=n2&x;
		if(b1&&b2&&(b1&b2))
		{
			no=addcarry(no,x);
			no=no^(b1^b2);
		}
		else
		{
			no=no^b1^b2;
		}
	}

	printf("result %d",no);
}	

int addcarry(int no,int x)
{
	int c=x<<1;
	no=no^c;
	//if((no^c)==0)
	//	addcarry(no,c);
	return no;
}		


/*c1=n1&x;
		c2=n2&x;
		//k=no&x;
		if(c1&c2)
		{
			printf("1\t");
			c=x<<1;
			//no=no^c;
			//j=addcarry(no,c,x);
			printf("%d\n",c);
			
		}
		
		else if(~(c1^c2))
		{
			no=no^c;
			c=0;
		}
		else //if((n1&x)|(n2&x))
		{
			no=no^(n1&x)^(n2&x)^c;
			//c=0;
		}
		x=x<<1;
		//c=0;
	}

	printf("result %d",no);
}
/*int addcarry(int nn,int cc,int xx)
{
	cc = xx<<1;
	nn=nn^cc;
	nn=addcarry(nn,cc,xx);
	return nn;	
}*/
