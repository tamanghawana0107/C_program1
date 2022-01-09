#include<stdio.h>
#include<conio.h>
int main()
{
	int a=0,b=1,i=0,sum=0,n=0;
	printf("Enter the no of series:");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d\t",sum);
		a=b;
		b=sum;
		sum=a+b;
	}
	getch();
}
