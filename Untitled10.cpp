#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student
{ 
  int stdcode;
  char stdname[40];
  int stdage;
  int stdfee;
  char stdaddress[100];
}s[2];
int main()
{
	struct student temp;
	int i=0,j=0,n=0;
	printf("Enter the number of students");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\nEnter the Student code:",i);
		scanf("%d",&s[i].stdcode);
		printf("\nEnter the student name:",i);
		scanf("%s",s[i].stdname);
		printf("\nEnter the student age:",i);
		scanf("%d",&s[i].stdage);
		printf("\nEnter the student fee:",i);
		scanf("%d",&s[i].stdfee);
		printf("\nEnter the student address:",i);
		scanf("%s",s[i].stdaddress);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(strcmp(s[i].stdname,s[j].stdname)<=0)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("\nThe records in alphabetical order are:");
		printf("\nStudent code: %d ",s[i].stdcode);
		printf("\n Student name: %s",s[i].stdname);
		printf("\nStudent age: %d",s[i].stdage);
		printf("\nStudent fee: %d",s[i].stdfee);
		printf("\nStudent address: %d",s[i].stdaddress);
		printf("\n");
	}
	return 0;
}
