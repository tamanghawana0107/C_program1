//WAP to take number from user and print individual digits and also print no of digits.
#include<stdio.h>
#include<conio.h>
int main()
{
	int num=0,id=0,nd;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>0)
	{
		id=num%10;
		printf("%d\n",id);
		num=num/10;
		nd++;
	}
	printf("Enter the number of digits:%d",nd);
	getch();
}
