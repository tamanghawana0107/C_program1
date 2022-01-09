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
		fgets(Emp[i].name,20,stdin);
		fflush(stdin);
		printf("\nEnter id of %d person::",i+1);
		scanf("%d",&Emp[i].id);
		fflush(stdin);
		printf("\nEnter salary of %d person::",i+1);
		scanf("%d",&Emp[i].salary);
		fflush(stdin);
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
	printf("\n Emp_Id::%d",Emp[0].id);
	printf("\n Emp_Salary::%d",Emp[0].salary);
	getch();
}
