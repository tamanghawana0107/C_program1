//WAP using for loop for multiplication.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num=2,product;
	for(i=1;i<=10;i++)
	{
		product=num*i;
		printf("\n %d*%d=%d",num,i,product);
	}
	getch();
}
