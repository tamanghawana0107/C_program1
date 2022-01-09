#include<stdio.h>
#include<conio.h>
int main()
{
	char a[40];
	int b=0,c,i=0;
	printf("Enter a string to check palindorme:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		b++;
	}
	for(i=0;i<b/2;i++)
	{
		c=1;
		if(a[i]!=a[b-1-i])
		{
			c=0;
			break;
		}
	}
	if(c==1)
	{
		printf("\n The given string is palindrome.");
	}
	else
	{
		printf("\n The given string is not palindrome.");
	}
	return 0;
}
