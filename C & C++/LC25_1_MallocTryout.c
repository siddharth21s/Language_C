#include<stdio.h>
#include<malloc.h>
int main()
{
	float *ptr;
	ptr=(float*)malloc(sizeof(float));
	printf("Pointer points to : %d, value=%d\n",ptr,*ptr);
	*ptr=32.56;
	printf("Pointer points to : %d, value=%f\n",ptr,*ptr);
	free(ptr);
	printf("Pointer points to : %d, value=%f\n",ptr,*ptr);
}
