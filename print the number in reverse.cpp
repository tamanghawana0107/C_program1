//WAP to print the number in reverse.
#include<stdio.h>
#include<conio.h>
int main()
{
	int num=0,rev=0,rem=0;
	printf("Enter a number:");
	scanf("%d",&num);
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	printf("\nThe reverse of number is %d",rev);
	getch();
}
