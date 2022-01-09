//WAP to print the pattern of number .
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0;
	for(i=5;i>=1;i--)
	{
		for(j=i;j>=1;j--)
		{
			printf("%d",i);
		}
		printf("\n");
	}
	getch();
}
