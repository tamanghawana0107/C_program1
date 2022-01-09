#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,n=0,a=0,b=1,c=0;
	printf("Enter the number:\n");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		printf("%d\t",c);
		a=b;
		b=c;
		c=a+b;
	}
getch();
}
