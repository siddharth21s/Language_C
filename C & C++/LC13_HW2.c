#include<stdio.h>
#include<conio.h>

int main()
{
	int no,k=1,j=0,i,nn;
	printf("Enter a number\n");
	scanf("%d",&no);
	printf("Enter a number of bits to right rotate\n");
	scanf("%d",&k);
	nn=no;
	i=(1<<k)-1;
	j=no&i;
	no=no>>k;
	j=j<<(sizeof(int)*8)-k;
	if(nn>0)
		no=j|no;
	else
		no=j&no;
	//printf("%d",sizeof(int)*8-k);
	printf("result : %d after %d bits right rotated",no,k);
	
}
