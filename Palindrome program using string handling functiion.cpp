//WAP to find out whether the program is palindrome or not using string handling function...
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[50],b[50];
	int result=0;
	printf("Enter a word:");
	gets(a);
	strcpy(b,a);
	strrev(a);
	result=strcmp(a,b);
		if(result==0)
		{	
			printf("\n The word is palindorme.");	
		}
		else
		{
			printf("\n The entered word is not palindrome.");
		}
		return 0;
}
