//WAP read characters using string handling functions.
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[15];
	int x;
	printf("Enter a word:");
	gets(a);
	x=strlen(a);
	printf("\nThe total no of characters in the given word are: %d",x);
	getch();
}
