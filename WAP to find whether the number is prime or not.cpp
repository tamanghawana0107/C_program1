//WAP to find whether a given number is prime or not.
#include<stdio.h>
#include<conio.h>
int main()
{
	int n=0,i=0;
	printf("Enter a number to check whether it is prime or not : ");
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		if(n%i==0)
		break;
	}
	if(i==n)
	printf("\nThe given number is prime.");
	else
	{
		printf("\nThe given number is not prime. ");
	}
	getch();
}
