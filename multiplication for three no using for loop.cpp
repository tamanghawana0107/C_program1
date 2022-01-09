#include<stdio.h>
#include<conio.h>
int main()
{
	int a=1,b=2,c=3,i,prod1,prod2,prod3;
	printf("Multiplication table of 1, 2 and 3\n");
	for(i=1;i<=10;i++)
	{
		prod1=a*i;
		prod2=b*i;
		prod3=c*i;
		printf("%d*%d=%d\t\t %d*%d=%d\t\t %d*%d=%d\t\t",a,i,prod1,b,i,prod2,c,i,prod3);
	}
	getch();
}
