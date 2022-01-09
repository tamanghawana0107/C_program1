//WAP to print new number pattern.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0,rows;
	printf("Enter the no of rows:");
	scanf("%d",&rows);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("\t%d",i);
		}
		printf("\n");
	}
	getch();
}
