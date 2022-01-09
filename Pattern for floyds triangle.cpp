//Write a program in C to print the Floyd's Triangle.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0;
	for(i=0;i<=4;i++)
	{
		for(j=0;j<=i;j++)
		{
			if((i+j)%2==0)
			{
				printf("1");
			}
			else
			{
				printf("0");
			}
		}
		printf("\n");
	}
	getch();
}
