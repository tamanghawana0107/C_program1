//WAP to find out which no is the greatest using ternary operator.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,var;
	printf("Enter any two no :\n");
	scanf("%d%d",&a,&b);
	var=(a>b)?a:b;
	printf("Saab bhanda thulo no %d",var);
	getch();
}
