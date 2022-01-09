//WAP for multiplication table using nested loop.
#include<stdio.h>
#include<conio.h>
int main()
{
	int a=1,b=3,i,j;
	printf("Multiplication table of 1,2 and 3\n\n");
	for(i=1;i<=10;i++)
	{
		for(j=a;j<=b;j++)
		{
			printf("%d*%d=%d",j,i,j*i);
			printf("\t");
		}
		printf("\n");
	}
	getch();
}
