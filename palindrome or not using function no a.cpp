//WAP to find whether the no is palindrome or not using function a .
#include<stdio.h>
#include<conio.h>
int main()
{
	int num=0,c=0,rev=0,rem=0;
	printf("Enter the number:");
	scanf("%d",&num);
	c=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(c==rev)
	{
		printf("%d is palindrome number.",c);
	}
	else
	{
		printf("%d is not palindrome number.",c);
	}
	getch();
}
