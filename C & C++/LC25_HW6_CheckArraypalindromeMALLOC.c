#include<stdio.h>
#include<malloc.h>
int main()
{
	int *a,i,f=0,j,k=0,n;
	printf("Enter number of elements:\n");
	scanf("%d",&n);
	a=(int *)malloc(n*sizeof(int));
	printf("A=%d\n",a);
	for(i=0;i<n;i++)
		scanf("%d",a+i);
	//n--;
	printf("A=%d,n=%d\n",a,n);
	for(i=0;j=n;i<j,i++,j--)
		if( (*(a+i)) != (*(a+j)) )
			k=1;
	//free(a);
	printf("K=%d",k);
	if(k==1)
		printf("Result: Not a Palindrome");
	else
		printf("Result: Is a Palindrome");
}
