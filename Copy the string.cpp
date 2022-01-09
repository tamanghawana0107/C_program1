//WAP to use the string copy function...
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char a[]="Riti";
	char b[10];
	strcpy(b,a);
	printf("Source =%s",a);
	printf("\nDestination=%s",b);
	getch();
}
