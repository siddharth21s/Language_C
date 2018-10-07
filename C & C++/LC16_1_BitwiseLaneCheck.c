#include<stdio.h>
lanecheck(int x, int y)
{
	int z;
	//if(x&(y))
	z=x&y;
	return z;
}

main()
{
	int n1,n2,n3,n4,r;
	printf("Enter n1,n2,n3,n4\n");
	scanf("%d%d%d%d",&n1,&n2,&n3,&n4);
	//r=lanecheck(n1,n2);
	//r=lanecheck(n3,r);
	r=lanecheck(n4,lanecheck(n3,lanecheck(n1,n2)));
	if(r)
		printf("there's a lane from n1 to n4");
	else
		printf("theres no lane from n1 to n4");
}
