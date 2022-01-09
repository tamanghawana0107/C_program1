
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct x
{
	int id;
	char name[40];
	int age;
	int fee;
	char address[100];
};
int main()
{
	struct x std[15],temp;
	int i=0,j=0,n=0;
	printf("input a number of students: ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("input %d's name ",i);
		scanf("%s",&std[i].name);
		printf("input %d's id : ",i);
		scanf("%d",&std[i].id);
		printf("input %d's age : ",i);
		scanf("%d",&std[i].age);
		printf("input %d's fee : ",i);
		scanf("%d",&std[i].fee);
		printf("input %d's address ",i);
		scanf("%s",&std[i].address);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(strcmp(std[i].name,std[j].name)<=0)
			{
				temp=std[i];
				std[i]=std[j];
				std[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		printf("name = %s\t",std[i].name);
			printf("id= %d\t",std[i].id);
			printf("age= %d\t",std[i].age);
			printf("address = %s\t",std[i].address);
			printf("fee= %d",std[i].fee);
			printf("\n");
	}
	getch();
}
	
