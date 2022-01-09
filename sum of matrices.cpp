//WAP to print the sum of matrices....
#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4][3],b[4][3],i=0,j=0,sum[4][3],c=0,d=0;
	printf("\n Enter the value:");
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter the[%d][%d] elements:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter the [%d][%d]elements:",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<3;j++)
		sum[i][j]=a[i][j]+b[i][i];
	}
		printf("\n The sum of matrix is :\n");
		{
			for(i=0;i<4;i++)
			{
				for(j=0;j<3;j++)
				printf("%5d",sum[i][j]);
				printf("\n");
			}
		}
	getch();
}
