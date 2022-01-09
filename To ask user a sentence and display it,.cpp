//WAP to ask user to enter a sentence and display.
#include<stdio.h>
#include<conio.h>
int main()
{
	char a[31];
	printf("Enter a sentence less than 30 characters:");
	gets(a);
	printf("The entered sentence is ");
	puts(a);
	getch();
}
