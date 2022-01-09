//Write a C program to calculate the factorial of a given number.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,fact,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
		printf("The factorial of %d is:%d",n,fact);
	getch();
}
