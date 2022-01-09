//WAP to find which one is greatest among 3 no.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,var;
	printf("Enter any three no:\n");
	scanf("%d%d%d",&a,&b,&c);
	var=(a>b)?(a>c)?a:c:(b>c)?b:c;
	printf("The greatest no is %d",var);
}
