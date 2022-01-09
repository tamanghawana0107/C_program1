//WAP to print the ASCII value of A-Z.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0;
	printf("The ASCII value from A-Z are:\n");
	for(i=65;i<=90;i++)
	{	
		printf("%c = %d\n",i,i);
	}
	getch();
}
