#include<stdio.h>
#include<stdlib.h>
#ifndef MATRIX_H
#define MATRIX_H
	int ** create(int m,int n);
	void accept(int **mat,int m,int n);
	void disp(int **mat,int m,int n);
	void freemat(int ***mat,int m,int n);
	int ** add(int **mat1,int **mat2,int m1,int n1,int m2,int n2);
	int ** sub(int **mat1,int **mat2,int m1,int n1,int m2,int n2);
	int ** mul(int **mat1,int **mat2,int m1,int n1,int m2,int n2);
#endif

int ** create(int m,int n)
{
	printf("111\n");
	int **mat = NULL;
	mat = (int **) malloc(m*sizeof(int*));
	for(int i=0;i<m;i++)
		mat[i]=(int*)malloc(n*sizeof(int));
	return mat;
	
}

void accept(int **mat,int m,int n)
{
	printf("111\n");
	if(mat)
	{
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				scanf("%d",&mat[i][j]);
	}
	else
		printf("\nNo matrix\n");
}

void disp(int **mat,int m,int n)
{
	printf("111\n");
	if(mat)
	{
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
				printf("%d\t",mat[i][j]);
			printf("\n");
		}
	}
	else
		printf("\nNo matrix\n");
}

void freemat(int ***mat,int m,int n)
{
	printf("111\n");
	if(mat && *mat)
	{
		for(int i=0;i<m;i++)
			free((*mat)[i]);
		free(*mat);
		*mat = NULL;
	}
	else
		printf("\nMatrix already Free");
}

int ** add(int **mat1,int **mat2,int m1,int n1,int m2,int n2)
{
	printf("11100\n");
	int **res=NULL,i,j;
	res=create(m1,n1);
	if(m1==m2 && n1==n2)
	{
		printf("11100\n");
		for(i=0;i<m1;i++)
		{
			for(j=0;j<n1;j++)
			{
				printf("11100555\n");
				res[i][j] = mat1[i][j] + mat2[i][j];
			}
		}
		return res;
	}
	else
		printf("\nMatrices Not Addtion Compatible");
	return NULL;
}

int ** sub(int **mat1,int **mat2,int m1,int n1,int m2,int n2)
{
	printf("11122\n");
	int **res=NULL;
	res=create(m1,n1);
	if(m1==m2 && n1==n2)
	{
		printf("11122\n");
		for(int i=0;i<m1;i++)
			for(int j=0;j<n1;j++)
				res[i][j] = mat1[i][j] - mat2[i][j];
		return res;
	}
	else
		printf("\nMatrices Not Subtraction Compatible");
	return NULL;
}

int ** mul(int **mat1,int **mat2,int m1,int n1,int m2,int n2)
{
	printf("11133\n");
	int **res=NULL,i=0,j=0,k=0,sum=0;
	res=create(m1,n2);
	if(m2==n1)
	{
		printf("11133\n");
		for(k=0;k<m1;k++)
		{
			
			for(i=0;i<n2;i++)
			{
				sum=0;
				for(j=0;j<m2;j++)
					sum = sum + (mat1[k][j])*(mat2[j][i]);
				res[k][i]=sum;
			}
			
		}
			
		return res;
	}
	else
		printf("\nMatrices Not Multiplication Compatible");
	return NULL;
}

int main()
{
	int c=1,**mat1,**mat2,**res,m1,n1,m2,n2;
	while(c!=9)
	{
		printf("\nEnter m,n\t:");
		scanf("%d%d",&m1,&n1);
		mat1=create(m1,n1);
		accept(mat1,m1,n1);
		disp(mat1,m1,n1);
		printf("\nEnter m,n\t:");
		scanf("%d%d",&m2,&n2);
		mat2=create(m2,n2);
		accept(mat2,m2,n2);
		disp(mat2,m2,n2);
		res=add(mat1,mat2,m1,n1,m2,n2);
		disp(res,m1,n1);
		res=sub(mat1,mat2,m1,n1,m2,n2);
		disp(res,m1,n1);
		res=mul(mat1,mat2,m1,n1,m2,n2);
		disp(res,m1,n2);
		freemat(&mat1,m1,n1);
		freemat(&mat2,m2,n2);
		freemat(&res,m1,n1);
		printf("\nEnter 9 to exit:\t");
		scanf("%d",&c);
	}
	
}
