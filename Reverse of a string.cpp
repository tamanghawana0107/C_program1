//WAP reverse of a string....
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[20];
	printf("Enter a word:");
	gets(a);
	strrev(a);
	printf("\nReverse of the word is:%s",a);
	getch();
}
