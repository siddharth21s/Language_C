#include<stdio.h>
#include<stdlib.h>
int MultiDimenArray();
int main()
{
	MultiDimenArray();
}

int MultiDimenArray()
{
	int i,j,m,n,s,**dp=NULL;
	printf("Ener m & n:\t");
	scanf("%d%d",&m,&n);
	dp=(int**)malloc(m*sizeof(int*));
	for(i=0;i<m;i++)
		dp[i]=(int*)malloc(n*sizeof(int));
	printf("Enter Elements\n");
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			scanf("%d",&dp[i][j]);
		}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
			printf("%d\t",dp[i][j]);
		printf("\n");
	}
	printf("sum of row elements\n");
	for(i=0;i<m;i++)
	{
		s=0;
		for(j=0;j<n;j++)
			s+=dp[i][j];
		printf("%d\n",s);
		
	}
	
	for(i=0;i<m;i++)
		free(dp[i]);
	free(dp);
	return 0;
}
