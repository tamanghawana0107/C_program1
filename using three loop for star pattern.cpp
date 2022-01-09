//WAP to print the pattern using the three for loop.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0,k=0;
	for(i=1;i<=5;i++)
	{
		for(k=i;k<=4;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("");
		}
		printf("\n");
	}
	getch();
}
