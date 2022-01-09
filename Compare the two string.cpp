//WAP to use the string compare function...
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[]="hawana";
	char b[]="hawana";
	int x;
	x=strcmp(a,b);
	if(x==0)
	{
		printf("They are identical.");
	}
	else
	{
		printf("They are not identical.");
	}
	getch();
}
