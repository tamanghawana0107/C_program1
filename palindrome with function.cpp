//WAP for the palindorme...
#include<stdio.h>
#include<conio.h>
int hero(int);
int main()
{
	int num=0,sum=0,c=0,heroine=0;
	printf("Enter number:");
	scanf("%d",&num);
	c=num;
	heroine=hero(num);
	if(c==sum)
	{
		printf("\n The number is palindrome.");
	}
	else
	{
		printf("\n The number is not palindrome.");
	}
	getch();
}
int hero(int x)
{	
	int sum=0;
	while(x!=0)
	{
		sum=sum*10+x%10;
		x/=10;
	}
	return sum;
}
