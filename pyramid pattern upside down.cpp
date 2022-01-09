//WAP to print upside down pyramid pattern.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	for(i=4;i>=1;i--)
	{
		for(k=4;k>=i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=2*i-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	getch();
}
