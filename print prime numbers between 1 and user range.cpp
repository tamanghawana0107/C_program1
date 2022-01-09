//WAP to list all the prime numbers between 1 and user given range.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,num,p;
	printf("Enter number range:");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		p=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			p++;
		}
		if(p==2)
		printf("\n%d",i);
	}
	getch();
}
