#include<stdio.h>
#include<conio.h>

int main()
{
	int n1,n2,i,c=1,j=0,x=1,k,no=0,c1,c2;
	printf("Enter two number\n");
	scanf("%d%d",&n1,&n2);
	j=add(n1,n2);
	printf("\n %d",j);  //add(i,c<<1);
	
}

int add(int i, int c)
{
	int n,b;
	n = i^c;
	b = i&c;
	if(b)
	{
		n=add(n, b<<1);
	}
	
	return n;
}



	/*i=n1^n2;
	j=n1&n2;
	if(j)
	//{
		i=i^(j<<1);
		n1=i^j;
		n2=i&j;
		c=n1^(n2<<1);
	//}
	printf("%d",c);	
}
	/*for(i=0;i<sizeof(int)*8;i++)
	{
		c1=n1&x;
		c2=n2&x;
		if(c1&c2)
		{
			//c=x<<1;
			//no=no^c;
			j=addcarry(no,c,x);
			printf("%d\n",j);
			
		}
		else //if((n1&x)|(n2&x))
		{
			no=no^(n1&x)^(n2&x);
			
		}
		x=x<<1;
		c=x;
	}

	printf("result %d",no);
}
int addcarry(int nn,int cc,int xx)
{
	cc = xx<<1;
	nn=nn^cc;
	nn=addcarry(nn,cc,xx);
	return nn;	
}


result = no1 ^ no2
carry = no1 & no2
if(carry)
	{
		add(result, carry << 1)
	}
*/
