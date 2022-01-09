//WAP for function with parameter and return....
#include<stdio.h>
#include<conio.h>
int rajesh(int,int);
int main()
{
	int a,b;
	int sum=0;
	printf("Enter two numbers :");
	scanf("%d%d",&a,&b);
	sum=rajesh(a,b);
	printf("\n The sum of two number:%d",sum);
	getch();
}
int rajesh(int x,int y)
{
	int result=0;
	result=x+y;
	return result;
}
