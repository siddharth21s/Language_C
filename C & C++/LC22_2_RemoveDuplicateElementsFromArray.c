#include<stdio.h>
int displ(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		if(a[i]!='*')	
			for(int j=i+1;j<n;j++)
				if(a[i]==a[j])
					a[j]='*';
	}
	for(int i=0;i<n;i++)
		if(a[i]!='*')
			printf("%d\n",a[i]);
		
}
int main()
{
	int i,j,k,n;
	printf("Enter number of elemnets  in an array:\t");
	scanf("%d",&n);
	printf("Enter Elements:\n");
	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	displ(a,n);
}


	
