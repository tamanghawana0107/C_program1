//WAP to find which one of the three no is greatest among them.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter any three no :\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b)
	{
		if(a>c)
		{
			printf(" \n A saab bhanda thulo ho.");
		}
		else
		{
			printf("\n C saab bhanda thulo ho.");
		}
	}
	else
	{
		if(b>c)
		{
			printf("\n B saab bhanda thulo ho.");
		}
		else
		{
			printf("\n C saab bhanda thulo ho.");
		}
	}
	getch();
}
