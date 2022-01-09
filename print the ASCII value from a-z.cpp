//WAP to print the ASCII value from a-z.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0;
	printf("The ASCII value from a-z are :\n");
	for(i=97;i<=122;i++)
	{
		printf("%c=%d\n",i,i);
		
	}
	getch();
}
