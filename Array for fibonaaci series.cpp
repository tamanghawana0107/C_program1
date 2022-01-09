//WAP using array for the fibonacci series....
#include<stdio.h>
#include<conio.h>
int main()
{
	int fib[50];
	int i=0,j=0,a=0,b=1,c=0,count=0;
	printf("Enter the number of terms :");
	scanf("%d",&count);
	{
		for(j=i+1;j<=count-1;j++)
		{
			printf("%d\n",c);
			a=b;
			b=c;
			c=a+b;
		}
	}
	getch();
}
