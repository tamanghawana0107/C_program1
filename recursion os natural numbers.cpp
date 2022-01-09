#include<stdio.h>
#include<conio.h>
int sum(int a);
int main()
{
	int num,result;
	printf("Enter a positive integer::");
	scanf("%d",&num);
	result=sum(num);
	printf("sum=%d",result);
	return 0;
}
int sum (int a)
{
	if(a!=0)
	{
		return a+sum(a-1);
	}
	else
	{
		return a;
	}
}
