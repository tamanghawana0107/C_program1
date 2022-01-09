//WAP to read the word not using string handling functions...
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[15];
	int i=0,count=0;
	printf("Enter a word:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		count++;
	}
	count--;
	printf("\nThe number of characters in the given word are:%d",count);
	getch();
}
