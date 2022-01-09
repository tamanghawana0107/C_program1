//WAP to print multiplication using do........while.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,num=2,prod;
	do
	{
		prod=num*i;
		printf("\n %d*%d=%d",num,i,prod);
		i++;
	}
	while(i<=10);
	getch();
}
