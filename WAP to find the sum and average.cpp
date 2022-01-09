//Write a program in C to read 10 numbers from keyboard and find their sum and average.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,n,sum=0,avg;
	for(i=1;i<=10;i++)
	{
		printf("\nEnter a no:");
		scanf("%d",&n);
		sum=sum+n;
	}
	printf("\nThe sum of 10 numbers is: %d",sum);
	avg=sum/10;
	printf("\nThe average of the numbers is: %d",avg);
	getch();
}
