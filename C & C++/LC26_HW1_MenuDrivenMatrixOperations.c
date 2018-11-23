#include<stdio.h>
#include<stdlib.h>
int** acceptArray(int m,int n);
void checksym(int **dp,int m,int n);
void checkiden(int **dp,int m,int n);
void transpose(int **dp,int m,int n);
int deter(int **dp,int m,int n);
void colmaj(int **dp,int m,int n);
void inver(int **dp,int m,int n);

int main()
{
	int i,j,**dp,m,n;
	printf("Ener m & n:\t");
	scanf("%d%d",&m,&n);
	dp=acceptArray(m,n);
	i=1;
	while(i<7 && i>0)
	{
		printf("1.Check Symetry\n2.Check Identity\n3.Create Transpose\n4.Column major form\n5.Determinant of matrix\n6.Inverse\nEnter Choice:\t");
		scanf("%d",&i);
		switch(i)
		{
			case 1:	printf("Checking symetry:\t");
					checksym(dp,m,n);break;
			case 2: printf("Checking Identity\n");
					checkiden(dp,m,n);break;
			case 3: printf("Creating Transpose\n");
					transpose(dp,m,n);break;
			case 5: printf("Determinant\n");
					deter(dp,m,n);break;
			case 4: printf("Clolumn major\n");
					colmaj(dp,m,n);break;
			case 6: printf("Inverse\n");
					inver(dp,m,n);break;
		}
	}
}

void inver(int **dp,int m,int n)
{
	int j,**tp,k,l,a,b,c,d,e,f,g,h,i;
	tp=(int**)malloc(m*sizeof(int*));
	for(k=0;k<m;k++)
		tp[k]=(int*)malloc(n*sizeof(int));
	for(k=0;k<m;k++)
		for(j=0;j<n;j++)
			tp[k][j]=dp[j][k];
	printf("inverse:\n");
	a=dp[0][0]; b=dp[0][1]; c=dp[0][2]; d=dp[1][0]; e=dp[1][1]; f=dp[1][2]; g=dp[2][0]; h=dp[2][1] ;i = dp[2][2];
	tp[0][0]=e*i-f*h;tp[0][1]=d*i-f*g;tp[0][2]=d*h-e*g;	
	tp[1][0]=b*i-c*h;tp[1][1]=a*i-c*g;tp[1][2]=a*h-b*g;
	tp[2][0]=b*f-c*e;tp[2][1]=a*f-c*d;tp[2][2]=a*e-b*d;
	tp[0][1]=tp[0][1]*(-1);tp[1][0]=tp[1][0]*(-1);tp[1][2]=tp[1][2]*(-1);tp[2][1]=tp[2][1]*(-1);
	l=deter(dp,m,n);
	for(k=0;k<m;k++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",((1/l)*tp[k][j]));
		printf("\n");
	}	
}

int deter(int **dp,int m,int n)
{
	int res,a,b,c,d,e,f,g,h,i;
	if ((m==n) && (m==3) && (n==3))
	{
		//printf("1111\n");
		a=dp[0][0]; b=dp[0][1]; c=dp[0][2]; d=dp[1][0]; e=dp[1][1]; f=dp[1][2]; g=dp[2][0]; h=dp[2][1] ;i = dp[2][2];
		//printf("%d,%d,%d,%d,%d,%d,%d,%d\n",a,b,c,d,e,f,g,h,i);
		res= (a*(e*i-f*h))-(b*(d*i-f*g))+(c*(d*h-e*g));
		printf("%d\n",res);
		return res;
	}
	else
		printf("Determinant not possible enter 3X3 mattrix\n");
	return 0;
}
void checksym(int **dp,int m,int n)
{
	int i,j;
	if(m==n)
	{
		for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(dp[i][j]!=dp[j][i])
			{
				printf("Not Symetric\n");return;
			}
		printf("Symetric\n");
	}
}

void checkiden(int **dp,int m,int n)
{
	int i,j;
	if(m==n)
	{
		for(i=0;i<n;i++)
		for(j=0;j<m;j++)
		{
			if((i==j) && (dp[i][j]!=1))
			{
				printf("Not Identity\n");return;
			}
			else if((i!=j) && (dp[i][j]!=0))
			{
				printf("Not Identity\n");return;
			}
		}
		printf("Is Identity\n");
	}
	else
		printf("Enter Matrix m==n");
}

void transpose(int **dp,int m,int n)
{
	int i,j,**tp,k,l;
	tp=(int**)malloc(m*sizeof(int*));
	for(i=0;i<m;i++)
		tp[i]=(int*)malloc(n*sizeof(int));
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			tp[i][j]=dp[j][i];
	printf("Transpose:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",tp[i][j]);
		printf("\n");
	}
	
}



void colmaj(int **dp,int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			printf("%d\t",dp[i][j]);
	printf("\n");
}

int** acceptArray(int m,int n)
{
	int i,j,**dp;
	dp=(int**)malloc(m*sizeof(int*));
	for(i=0;i<m;i++)
		dp[i]=(int*)malloc(n*sizeof(int));
	printf("Enter Elements\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			scanf("%d",&dp[i][j]);
		}
	printf("\n Entered Matrix:\n");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",dp[i][j]);
		printf("\n");
	}
	return dp;
}
