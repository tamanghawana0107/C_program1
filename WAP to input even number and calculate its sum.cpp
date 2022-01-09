//Write a program in C to display the n terms of even natural number and their sum.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,sum=0;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("The even numbers are:");
	for(i=1;i<=n;i++)
	{
		printf("%d\t",2*i);
		sum=sum+2*i;
	}
	printf("\nThe sum of %d number is :%d",n,sum);
	getch();
}
