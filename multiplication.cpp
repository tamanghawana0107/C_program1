//WAP to find the multiplication using while loop
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=1,num=85,product;
	while(i<=10)
	{
		product=i*num;
		printf("%d*%d=%d\n",num,i,product);
		i++;
	}
	getch();
}
