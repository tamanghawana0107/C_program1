//WAP to print the odd star pattern.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0;
	for(i=1;i<=8;i=i+2)
	{
		for(j=1;j<=i;j++)
		{
			printf("\t *");
		}
		printf("\n");
	}
	getch();
}
