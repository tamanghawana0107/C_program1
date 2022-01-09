//WAP to reverse a string without using string handling function...
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[15],b[15];
	int i=0;//
	printf("Enter a word:"); //riti
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		a[i]=a[2];
	}
	printf("The reverse of the string is: %s",a[i]);
	getch();
}
