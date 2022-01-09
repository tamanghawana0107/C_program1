#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0,a[2][2],b[2][2],sum[2][2];
	printf("The matrix is:");
	for(i=0;i<1;i++)
	{
		for(j=0;j<1;j++)
		{
			printf("\nEnter the first matrix elements :");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<1;i++)
	{
		for(j=0;j<1;j++)
		{
			printf("\n Enter the second matrix elements:");
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<1;i++)
	{
		for(j=0;j<1;j++)
		sum[i][j]=a[i][j]+b[i][j];
	}
	printf("\n The sum of two matrices :\n\n");
	for(i=0;i<1;i++)
	{
		for(j=0;j<1;j++)
		printf("%d\t",sum[i][j]);
		printf("\n");
	}
	getch();
}
