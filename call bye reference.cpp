#include<stdio.h>
#include<conio.h>
void change(int *a);
int main()
{
	int a=10;
	printf("Before calling function::a=%d\n",a);
	change(&a);
	printf("After calling function::a=%d\n",a);
	getch();
}
void change(int *a)
{
	*a=*a+10;
	printf("Value of a inside function change is ::%d\n",*a);
}
