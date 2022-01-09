//WAP for the function with no return and no parameter....
#include<stdio.h>
#include<conio.h>
int  rajnikanth();
int main()
{
	rajnikanth();
	getch();
}
int rajnikanth()
{
	int a,b,sum=0;
	printf("Enter two number:");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("\n The sum of the two numbers is :%d",sum);
}
