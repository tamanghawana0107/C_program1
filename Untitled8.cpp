//WAP to print the pattern in odd form.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<5;j++)
		{
			if(j%2==1)
			{
				printf("\t *");
			}
		}
		printf("\n");
	}
	getch();
}
