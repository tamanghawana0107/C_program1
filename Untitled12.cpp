#include<stdio.h>
#include<conio.h>
struct employee
{
	
	char name[40];
	int age[5];
	char add[20];
	int phone[15];
}s[200];
int main()
{
	struct employee temp;
	int i=0,j=0,n=0;
	printf("How many record you want to enter::");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter the name of the %d person::",i+1);
		scanf("%s",s[i].name);
		printf("\n Enter the age of the %d person::",i+1);
		scanf("%d",&s[i].age);
		printf("\n Enter the address of the %d person::",i+1);
		scanf("%s",s[i].add);
		printf("\n Enter the phone number of the %d person::",i+1);
		scanf("%d",&s[i].phone);
	}

	for(i=0;i<n-1;i++)
	{
	for(j=i+1;j<n;j++)
	{
		if(s[i].name<s[j].name)
		{

    		temp=s[i];
    		s[i]=s[j];
    		s[j]=temp;
    	}
	}
	}
	printf("\n name,add, age,phone no in ascending order by name ");
	for(i=0;i<n;i++)
	{
		//printf("%s%s%d%d",s[i].name,s[i].add,&s[i].age,s[i].phone);
		printf("\n name=%s",s[i].name);
		printf("\n add=%s",s[i].add);
		printf("\n Age=%d",s[i].age);
		printf("\n Phone number=%d",s[i].phone);
	}
getch();
}
