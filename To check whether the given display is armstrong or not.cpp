//WAP to print a number to find whether it is armstrong or not.
#include<stdio.h>
#include<conio.h>
int main()
{
	int num=0,rem=0,sum=0,temp=0;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem*rem*rem;
		num=num/10;
	}
	if(temp==sum)
	{
		printf("\nThe number is armstrong.");
	}
	else
	{
		printf("\nTne number is not armstrong.");
	}
	getch();
}
