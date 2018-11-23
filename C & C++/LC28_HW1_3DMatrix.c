#include<stdio.h>
#include<stdlib.h>
#ifndef MATRIX_H
#define MATRIX_H
	int *** create(int m,int n,int o);
	void accept(int ***mat,int m,int n,int o);
	void disp(int ***mat,int m,int n,int o);
	void freemat(int ****mat,int m,int n,int o);
#endif


int *** create(int m,int n,int o)
{
	int ***mat = NULL;
	printf("111\n");
	mat = (int ***) malloc(m*sizeof(int**));
	for(int i=0;i<m;i++)
		mat[i]=(int**)malloc(n*sizeof(int*));
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			mat[i][j]=(int*)malloc(o*sizeof(int));
	return mat;
	
}

void accept(int ***mat,int m,int n,int o)
{
	printf("111000\n");
	if(mat)
	{
		printf("111000212\n");
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				for(int k=0;k<o;k++)
					scanf("%d",&mat[i][j][k]);
	}
	else
		printf("\nNo matrix\n");
}

void disp(int ***mat,int m,int n,int o)
{
	printf("111222\n");
	if(mat)
	{
		for(int i=0;i<m;i++)
		{
			printf("%d layer:\n",i+1);
			for(int j=0;j<n;j++)
			{
				for(int k=0;k<o;k++)
					printf("%d\t",mat[i][j][k]);
				printf("\n");
			}
			printf("\n");
		}
	}
	else
		printf("\nNo matrix\n");
}

void freemat(int ****mat,int m,int n,int o)
{
	printf("111333\n");
	if(mat && *mat)
	{
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				free((*mat)[i][j]);
		for(int i=0;i<m;i++)
			free((*mat)[i]);
		free(*mat);
		*mat = NULL;
	}
	else
		printf("\nMatrix already Free");
}


int main()
{
	int ***mat,m,n,o;
	printf("Enter m,n,o\n");
	scanf("%d%d%d",&o,&n,&m);
	mat=create(m,n,o);
	accept(mat,m,n,o);
	disp(mat,m,n,o);
	freemat(&mat,m,n,o);
}
