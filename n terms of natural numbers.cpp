//Write a program in C to display n terms of natural number and their sum.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,n,sum=0;
	printf("Enter the number of natural numbers:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("The sum of %d terms is : %d",n,sum);
	getch();
}
