//WAP to print options using if else
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,choice,ADD,SUB,DIV,PRODUCT;
	printf("\n\n\n\n\t\t\t\t\t MENU\n");
	printf("\t\t\t\t**********************");
	printf("\n\t\t\t Options:\n \t\t\t1.ADD\n \t\t\t2.SUB\n \t\t\t3.DIV\n \t\t\t4.PRODUCT");
	printf("\n\t\t\tEnter any two no:");
	scanf("%d%d",&a,&b);
	printf("\n \t\t\tEnter the choice from above:");
	scanf("%d",&choice);
	if(choice==1)
	{
		ADD=a+b;
		printf("\t\t\tThe addition of two no is :%d",ADD);
	}
	else if(choice==2)
	{
		SUB=a-b;
		printf("\t\t\tThe subtraction of two no is :%d",SUB);
	}
	else if(choice==3)
	{
		DIV=a/b;
		printf("\t\t\tThe division of two no is :%d",DIV);
	}
	else if(choice==4)
	{
		PRODUCT=a*b;
		printf("\t\t\tThe product of two no is :%d",PRODUCT);
	}
	else
	{
		printf("\n \t\t\tPlease enter no from (1-4) only.");
	}
	getch();
}
