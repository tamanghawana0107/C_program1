//WAP to print pascals triangle.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,v;
	for(i=0;i<5;i++)
	{
		for(k=5;k>i;k--)
		{
			printf(" ");
		}
		v=1;
		for(j=0;j<=i;j++)
		{
			printf(" %d",v);
			v=v*(i-j)/(j+1);
		}
		printf("\n");
	}
	getch();
}
