//A simple program using pointer....
#include<stdio.h>
#include<conio.h>
int main()
{
	int x=10;
	int *p;
	p=&x;
	printf("\n%d",x);
	printf("\n%p",&x);
	printf("\n%p",p);
	printf("\n%p",&p);
	printf("\n%d",*p);
	getch();
}
