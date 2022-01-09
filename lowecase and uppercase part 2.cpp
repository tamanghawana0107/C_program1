//WAP to print UPPERCASE or lowercase...
#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("Enter a character :");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("UPPERCASE");
	}
	else if(ch>='a'&&ch<='z')
	{
		printf("lowercase");
	}
	else
	printf("INVALID INPUT");
	getch();
}
