//palindrome with function b..
#include<stdio.h>
#include<conio.h>
int jhyau();
int main()
{
	int jindagi=0,c=0,num=0;
	printf("Enter a number::");
	scanf("%d",&num);
	c=num;
	jindagi=jhyau();
	if(c==jindagi)
	{
		printf("\n The number is palindrome.");
	}
	else
	{
		printf("\n The number is not palindrome.");
	}
	getch();
}
int jhyau()
{
	int num=0,c=0,sum=0;
	printf("Enter a number::");
	scanf("%d",&num);
	c=num;
	while(c!=0)
	{
		sum=sum*10+num%10;
		num/=10;
	}
	return sum;
}
