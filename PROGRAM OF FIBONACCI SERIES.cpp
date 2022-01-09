//Write a program in C to display the first n terms of Fibonacci series.Fibonacci series 0 1 2 3 5 8 13 .....
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,a=0,b=1,c=1,n;
	printf("Enter a number:");
	scanf("%d",&n);
	printf("\nFibonacci series:%d\t%d\t",a,b);
	for(i=1;i<=n;i++)
	{
		printf("%d\t",c);
		a=b;
		b=c;
		c=a+b;
	
	}
	getch();
}
