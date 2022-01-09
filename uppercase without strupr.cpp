//WAP to print the uppercase without using strupr()...
#include<stdio.h>
#include<conio.h>
int main()
{
	char a[50];
	int i=0;
	printf("Enter a string:");
	gets(a);
	while(a[i]!='\0')
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			a[i]=a[i]-32;
		}
		i++;
	}
	printf("\n UPPERCASE string is :");
	puts(a);
	getch();
}
