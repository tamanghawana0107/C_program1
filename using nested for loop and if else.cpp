//WAP to print the pattern using for loop.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i==j)
			{
				printf("\t $");
			}
			else
			{
				printf("\t *");
			}
		} 
		printf("\n");
	}
	getch();
}
