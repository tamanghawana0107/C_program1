//WAP for the function with return and no parameter...
#include<stdio.h>
#include<conio.h>
int KGF();
int main()
{

	int sum=0;
	sum=KGF();
	printf("The sum of the two number is : %d",sum);
	getch();
}
int KGF()
{
	int a,b;
	int result;
	printf("Enter the two number:");
	scanf("%d%d",&a,&b);
	result=a+b;
	return result;
}
