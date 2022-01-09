//Write a program in C to find the number and sum of all integer between 100 and 200 which are divisible by 9.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num=200,sum;
	printf("The sum of all the integer between 100 to 200 divisible by 9 are:\n");
	for(i=100;i<=200;i++)
	{
		if(i%9==0)
		{
			printf("%d\n",i);
			sum=sum+i;
		}
	}
	printf("The sum of all the integer is :%d",sum);
	getch();
}
