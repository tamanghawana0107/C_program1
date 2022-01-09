//WAP to take character input from user and convert it into upper case if it is in lower case and vice versa.
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	char s[20];
	printf("Enter a character :");
	scanf("%c",&s);
		if(s >='a'&&s <='z')
		{
			printf("\n The uppercase of the string is :%c",toupper(s));
		}
		else if(s >='A'&&s <='Z')
		{			
			printf("\n The lowercase of the string is :%c",tolower(s));
		}
		else
		{
		printf("\nINVAlID VALUE");
		}
	return 0;
}
