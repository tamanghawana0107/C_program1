/*WAP to enter name ,id,and salary of 10 employes ,and display details of 
the employee with highest salary*/
#include<stdio.h>
struct emp
{
	char name[20];
	int id;
	int salary;
};
int main()
{
	struct emp s[5],temp;
	int i=0,j=0;
	printf("\n Enter data:");
	for(i=0;i<5;i++)
	{
		printf("\nEnter name of %d person::",i+1);
		fgets(s[i].name,20,stdin);
		fflush(stdin);
		printf("\nEnter id of %d person::",i+1);
		scanf("%d",&s[i].id);
		fflush(stdin);
		printf("\nEnter salary of %d person::",i+1);
		scanf("%d",&s[i].salary);
		fflush(stdin);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(s[i].salary<s[j].salary)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("\n The details of highest salary person is:");
	printf("\n NAME::");
	puts(s[0].name);
	printf("\n ID::%d",s[0].id);
	printf("\n Salary::%d",s[0].salary);
	return 0;
}
