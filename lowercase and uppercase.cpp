//WAP to ask the user to enter a character and display whether it is lowercase or UPPERCASE..
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch>=65&&ch<=90)
	{
		printf("UPPERCASE");
	}
	else if(ch>=97&&ch<=122)
	{
		printf("lowercase");
	}
	else
	printf("\nINVALID INPUT");
	getch();
}
