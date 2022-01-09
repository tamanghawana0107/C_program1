/*WAP using structure to input the N students and arrange these records in alphabetical order
and display these record.*/
#include<stdio.h>
#include<string.h>
#include<conio.h>
struct information
{
	char name[40];
	int code;
	int age;
	int fee;
	char address[100];
}s[20],temp;
int main()
{
	int i=0,j=0,n=0;
	printf("\n How many record you want to enter::\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the name of the %d student::",i+1);
		scanf("%s",s[i].name);
		printf("\n Enter the student code of the %d student::",i+1);
		scanf("%d",&s[i].code);
		printf("\n Enter the age of the %d student::",i+1);
		scanf("%d",&s[i].age);
		printf("\n Enter total fee of the %d student::",i+1);
		scanf("%d",&s[i].fee);
		printf("\n Enter the address of the %d student::",i+1);
		scanf("%s",s[i].address);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(s[i].name,s[j].name)>0)
			{
				temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		}
	}
	printf("\n The information of the employees are ::\n");
	for(i=0;i<n;i++)
	{
	   printf("\nStudent name = %s\t",s[i].name);
			printf("\nStudent Code= %d\t",s[i].code);
			printf("Student Age= %d\t",s[i].age);
			printf("Address = %s\t",s[i].address);
			printf(" Student Totalfee= %d",s[i].fee);
			printf("\n");
	}
	   getch();
}
