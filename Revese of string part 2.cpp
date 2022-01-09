//WAP to use string reverse function...
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[15];
	printf("Enter a word:");
	gets(a);
	strrev(a);
	printf("The reverse of the word is :%s",a);
	getch();
}
