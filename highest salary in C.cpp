/*WAP to input 10 employees record and display the innformation who gets highest salary.*/
#include<stdio.h>
#include<conio.h>
struct record
{
	char name[20];
	int id;
	int salary;
}Emp[5],temp;
int main()
{
	int i=0,j=0;
	printf("\n Enter data:");
	for(i=0;i<5;i++)
	{
		printf("\nEnter name of %d person::",i+1);
		scanf("%s",Emp[i].name);
		printf("\nEnter id of %d person::",i+1);
		scanf("%d",&Emp[i].id);
		printf("\nEnter salary of %d person::",i+1);
		scanf("%d",&Emp[i].salary);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(Emp[i].salary<Emp[j].salary)
			{
				temp=Emp[i];
				Emp[i]=Emp[j];
				Emp[j]=temp;
			}
		}
	}
	printf("\n The details of highest salary person is:");
	printf("\n Emp-name::");
	puts(Emp[0].name);
	printf("\n Emp_Id::%d",s[0].id);
	printf("\n Emp_Salary::%d",s[0].salary);
	return 0;
}
}
