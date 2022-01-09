//WAP to print product of two matrices .....
#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0,r=0,c=0,h=0,t=0,k=0,sum=0;
	int a[2][3],b[3][4],prod[2][4];
	printf("Enter the no of rows and columns for the first matrix:");
	scanf("%d%d",&r,&c);
	printf("\nEnter elements in the first matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d\n",a[i][j]);
		}
	}
	printf("\nEnter no of rows and columns for the second matrix:");
	scanf("%d%d",&h,&t);
	if(c!=h)
	{
		printf("The multiplication is not possible...\n");
	}
	else
	{
		printf("Enter elements for the second matrix:");
	}
	for(i=0;i<h;i++)
	{
		for(j=0;j<t;j++)
		{
			scanf("%d\n",b[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<t;j++)
		{
			for(k=0;k<h-1;k++)
			{
				sum=sum+a[i][k]*b[k][j];
			}
			prod[i][j]=sum;
			sum=0;
		}
	}
	printf("Product of matrices:\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",prod[i][j]);
		}
		printf("\n");
	}
	getch();
}
