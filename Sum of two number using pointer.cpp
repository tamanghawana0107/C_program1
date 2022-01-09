///WAP using pointer to find the sum of two numbers....
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,sum=0;
	int *p,*q,*r;
	p=&a;
	q=&b;
	r=&sum;
	printf("\nEnter two numbers a and b::\n");
	scanf("%d%d",&a,&b);
	*r=*p+*q;
	printf("\n The sum is %d",*r);
	getch();
}
