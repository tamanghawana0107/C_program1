//WAP to swap two numbers using pointer....
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,temp;
	int *p,*q,*r;
	p=&a;
	q=&b;
	r=&temp;
	printf("Enter the two numbers ::");
	scanf("%d%d",&a,&b);
	printf("\n\nValue before swapping are::%d\t%d",*p,*q);
	*r=*p;
	*p=*q;
	*q=*r;
	printf("\n\nThe swapped variable are %d and %d",*p,*q);
	getch();
}
