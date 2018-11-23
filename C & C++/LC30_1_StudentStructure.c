#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int addstudent(int i);
int displaystudent(int i);
int displaypercent(int i);
int search(int i);
int updatemarks(int i);

struct Student
{
	char name[20];
	char addr[30];
	char div[30];
	int roll;
	int marks[3];
	float per;
}st[100];

int main()
{
	int rol=0,ch=1;
	while(ch<6 && ch>0)
	{
		printf("\nOperations on student\n1.Add student\n2.display students\n3.display Percentage of students\n4.search student\n5.update marks\nEnter choice:\t");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: addstudent(rol);rol++;break;
			case 2: displaystudent(rol);break;
			case 3: displaypercent(rol);break;
			case 4: search(rol);break;
			case 5: updatemarks(rol);break;
		}
	}
}

int addstudent(int i)
{
	char v;
	printf("\tADD STUDENT\nEnter Name: ");
	scanf("%c",&v);
	scanf("%[^\n]s",&st[i].name);
	printf("Enter address: ");
	scanf("%c",&v);
	scanf("%[^\n]s",&st[i].addr);
	printf("Enter Division: ");
	scanf("%c",&v);
	scanf("%[^\n]s",&st[i].div);
	printf("Enter Rollno: %d\n",i);
	st[i].roll=i;
	int sum=0;
	for(int j=0;j<3;j++)
	{
		printf("Enter subject %d marks: ",j+1);
		scanf("%d",&st[i].marks[j]);
		sum+=st[i].marks[j];
	}
	st[i].per = sum/3;
	return 0;
}

int displaystudent(int i)
{
	printf("\n\tDISPLAY STUDENT DETAILS\n");
	int rj[i],temp;
	for (int j = 0;j<i;j++)
		rj[j]=j;
	
	min = st[0].per;
	for (int j=0;j<i;j++)
		for (int k=0;k<i-j;k++)
		{
			temp = rj[k]
			if min > 
		}
		
	for(int j=0;j<i;j++)
	{
		printf("name: %s\naddress: %s\ndivision: %s\nrollno: %d\n",st[j].name,st[j].addr,st[j].div,st[j].roll);
		for(int k=0;k<3;k++)
			printf("\tsub%d: %d\n",k+1,st[j].marks[k]);
		printf("Percentage : %3.3f",st[j].per);
	}
	
	return 0;
}

int displaypercent(int i)
{
	printf("\n\tDISPLAY STUDENT PERCENTAGE\n");
	for(int j=0;j<i;j++)
	{
		float sum=0;
		for(int k=0;k<3;k++)
			sum+=st[j].marks[k];
		printf("\nRollno: %d\n\t percentage = %3.3f",st[j].roll,sum/3);
	}
	return 0;
}

int search(int i)
{
	
	int j;
	printf("\n Enter rollno: ");
	scanf("%d",&j);
	if(i<=j)
		printf("Invalid roll number");
	else
		printf("name: %s\naddress: %s\ndivision: %s\nrollno: %d\n",st[j].name,st[j].addr,st[j].div,st[j].roll);
	return 0;	
}

int updatemarks(int i)
{
	int j;char v;
	printf("\n Enter rollno: ");
	scanf("%d",&j);
	if(i<=j)
		printf("Invalid roll number");
	else
		for(int k=0;k<3;k++)
		{
			printf("\tsub%d: Enter marks= ",k+1);
			//scanf("%c",&v);
			scanf("%d",&st[j].marks[k]);
		}
	return 0;
}



