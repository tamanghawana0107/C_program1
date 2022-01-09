//WAP to take character input from user and convert it into upper case if it is in lower case and vice versa.
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
int main()
{
	char ch[20];
	printf("Enter a string :");
	scanf("%c",&ch);
		if(ch >='a'&&ch <='z')
		{
			printf("\n The uppercase of the string is :%c",toupper(ch));
		}
		else if(ch >='A'&&ch <='Z')
		{			
			printf("\n The lowercase of the string is :%c",tolower(ch));
		}
		else
		{
		printf("\nINVAlID VALUE");
		}
	return 0;
}
