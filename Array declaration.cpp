//WAP for the array declaration.
#include<stdio.h>
#include<conio.h>
int main()
{
	int num[10],i=0;
	for(i=0;i<=9;i++)
	{
		printf("Enter a number:");
		scanf("%d",&num[i]);
	}
		printf("\nThe 5th element is :%d",num[4]);
	getch();
}
