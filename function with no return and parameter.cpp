//WAP for the function with no return and parameter...
#include<stdio.h>
#include<conio.h>
int hamal(int,int);
int main()
{
	int a,b;
	printf("Enter the two number:");
	scanf("%d%d",&a,&b);
	hamal(a,b);
	getch();
} 
int hamal(int x,int y)
{
	int result;
	result=x+y;
	printf("The sum of two number is:%d",result);
}
