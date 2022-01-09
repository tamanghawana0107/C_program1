//WAP to print product of two matrices .....
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0,r1=0,c1=0,r2=0,c2=0,k=0,sum=0;
	int a[2][3],b[3][4],prod[2][4];
	printf("Enter the no of rows and columns for the first matrix:");
	scanf("%d%d",&r1,&c1);
	printf("\nEnter elements in the first matrix:");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			scanf("%d",a[i][j]);
		}
	}
	printf("\nEnter no of rows and columns for the second matrix:");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("The multiplication is not possible...\n");
	}
	else
	{
		printf("Enter elements for the second matrix:");
	}
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			scanf("%d",b[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			for(k=0;k<r2-1;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			prod[i][j]=sum;
			sum=0;
		}
	}
	printf("Product of matrices:\n");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("%d\t",prod[i][j]);
		}
		printf("\n");
	}
	getch();
}
