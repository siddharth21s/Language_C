#include<stdio.h>
#include<malloc.h>
int main()
{
	int *p,i,n;
	printf("Enter No of Elements");
	scanf("%d",&n);;
	p=(int *)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
		*(p+i)=10*(i+1);
	for(i=0;i<n;i++)
		printf("index=%d, value=%d, pointer points to %d\n",i,*(p+i),p);
	free(p);
	printf("After Free\n");
	for(i=0;i<n;i++)
		printf("index=%d, value=%d, pointer points to %d\n",i,*(p+i),p);
}
