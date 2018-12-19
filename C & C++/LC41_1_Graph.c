#include<stdlib.h>
#include<stdio.h>

void AcceptMatrix(int ** matrix,int m)
{
	int data,dir;
	printf("\nEnter 0 if edge not present and enter 1 is present\nis the graph directed?(1/0):");
	scanf("%d",&dir);
	
	for(int i=0;i<m;i++)
	{
		int j;
		if(dir)
			j=0;
		else
			j=i;
		for(j;j<m;j++)
		{
			if(i==j)
			{
				matrix[i][j]=0;
			}
			else
			{
				printf("Edge between (%d,%d): ",i,j);
				scanf("%d",&matrix[i][j]);
				if(dir==0)
					matrix[j][i]=matrix[i][j];
			}
		}
	}
		
}

int ** Create(int m)
{
	int ** matrix = (int **)malloc(m*sizeof(int*));
	for(int i=0;i<m;i++)
	{
		matrix[i]=(int *)malloc(m*sizeof(int));
	}
	return matrix;
}

void Display(int ** gr,int m)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<m;j++)
			printf("%d\t",gr[i][j]);
		printf("\n");
	}
}

void Indegree(int **gr,int m)
{
	
	for(int i=0;i<m;i++)
	{
		int deg=0,j=0;
		for(j;j<m;j++)
		{
			deg+=gr[j][i];
		}
		printf("\n%d has in degree : %d",i,deg);
	}
}

void Outdegree(int **gr,int m)
{
	
	for(int i=0;i<m;i++)
	{
		int deg=0,j=0;
		for(j;j<m;j++)
		{
			deg+=gr[i][j];
		}
		printf("\n%d has out degree : %d",i,deg);
	}
}

int main()
{
	printf("Enter no of vertices:");
	int m,**g;
	scanf("%d",&m);
	g=Create(m);
	AcceptMatrix(g,m);
	Display(g,m);
	Indegree(g,m);
	Outdegree(g,m);
}
