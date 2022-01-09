#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0,k=0;
	for(i=0;i<=4;i++)
	{
		for(k=1;k=4-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i=3;i>=1;i--)
	{
		for(k=1;k<=4-i;k++)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("\n");
		}
		getch();
	}
}
