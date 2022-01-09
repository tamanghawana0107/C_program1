//WAP to print the number in reverse.
#include<stdio.h>
#include<conio.h>
int main()
{
	int num=0,rev=0,rem=0,temp=0;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		rev=rev*10+rem;
		printf("%d",rem);
		num=num/10;
	}
	if(temp==rev)
	{
		printf("\nThe given number is palindrome.");
	}
	else
	{
		printf("\nThe given number is not palindrome.");
	}
	getch();
}
