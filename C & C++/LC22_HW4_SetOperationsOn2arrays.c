#include<stdio.h>
int unionr(int a[],int b[],int n,int m);
int intersec(int a[],int b[],int n,int m);
int diff(int a[],int b[],int n,int m);
int symdiff(int a[],int b[],int n,int m);
int bubsort(int c[],int i);

int main()
{
	int n,m,i,j,k=1,x;
	printf("Enter no of elements in 1 array:\t");
	scanf("%d",&n);	int a[n];
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter no of elements in 2 array:\t");
	scanf("%d",&m);	int b[m];
	for(j=0;j<m;j++)
		scanf("%d",&b[j]);
	if(n>=m)
		while(k>0 && k<5)
		{
			printf("1.Union\n2.Intersection\n3.Difference\n4.Symetric Difference\nEnter choice:\t");
			scanf("%d",&k);
			switch(k)
			{
				case 1 : unionr(a,b,n,m);break;
				case 2: intersec(a,b,n,m);break;
				case 3: printf("Enter 1 for a-b & any other number for b-a:\t"); scanf("%d",&x);
						if(x==1)
							diff(a,b,n,m);
						else
							diff(b,a,m,n);
						break;
				case 4: symdiff(a,b,n,m);break;
				default: break;
			}
		}
	else
		while(k>0 && k<5)
		{
			printf("1.Union\n2.Intersection\n3.Difference\n4.Symetric Difference\nEnter choice:\t");
			scanf("%d",&k);
			switch(k)
			{
				case 1 : unionr(b,a,m,n);break;
				case 2: intersec(b,a,m,n);break;
				case 3: printf("Enter 1 for a-b & any other number for b-a:\t"); scanf("%d",&x);
						if(x==1)
							diff(b,a,m,n);
						else
							diff(a,b,n,m);
						break;
				case 4: symdiff(b,a,m,n);break;
				default: break;
			}
		}
}

int unionr(int a[],int b[],int n,int m)
{
	int i=0,j=0,k=0,c[100],f=0;
	printf("In union\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(a[i]==b[j])
				c[k++]=a[i];
//	printf("%d=k\n",k);
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
			if(a[i]==c[j])
				f=1;
		if(f==0)
			c[k++]=a[i];
		f=0;
	}
//	printf("%d=k\n",k);
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
			if(b[i]==c[j])
				f=1;
		if(f==0)
			c[k++]=b[i];
		f=0;
	}
//	printf("%d=k\n",k);
//	if(m!=n)
//		k=k-1;
//	printf("%d=k\n",k);
	printf("\n\t[");
	for(i=0;i<k;i++)
		printf("%d,",c[i]);
	printf("]\n");
}

int intersec(int a[],int b[],int n,int m)
{
	int i=0,j=0,k=0,c[100],f=0;
	printf("In Intersec\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(a[i]==b[j])
				c[k++]=a[i];
	printf("\n\t[");
	for(i=0;i<k;i++)
		printf("%d,",c[i]);
	printf("]\n");
}


int diff(int a[],int b[],int n,int m)
{
	int i=0,j=0,k=0,c[100],f=0,l=0,d[100];
	printf("In diff\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(a[i]==b[j])
				c[k++]=a[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
			if(a[i]==c[j])
				f=1;
		if(f==0)
			d[l++]=a[i];
		f=0;
	}
	printf("\n\t[");
	for(i=0;i<l;i++)
		printf("%d,",d[i]);
	printf("]\n");
}

int symdiff(int a[],int b[],int n,int m)
{
	int i=0,j=0,k=0,c[100],f=0,l=0,d[100];
	printf("In symdiff\n");
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			if(a[i]==b[j])
				c[k++]=a[i];
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
			if(a[i]==c[j])
				f=1;
		if(f==0)
			d[l++]=a[i];
		f=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<k;j++)
			if(b[i]==c[j])
				f=1;
		if(f==0)
			d[l++]=b[i];
		f=0;
	}
	if(m!=n)
		l=l-1;
	printf("%d=l\n",l);
	printf("\n\t[");
	for(i=0;i<l;i++)
		printf("%d,",d[i]);
	printf("]\n");

}

