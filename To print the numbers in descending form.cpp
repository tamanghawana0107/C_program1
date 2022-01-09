//WAP to print the numbers in Descending order....
#include<stdio.h>
#include<conio.h>
int main()
{
	int num[10]={23,64,34,6,123,65,75,1,4,8};
	int i=0,j=0,temp=0;
	for(i=0;i<=9;i++)
	{
		for(j=i+1;j<=10;j++)
		{
			if(num[i]<num[j])
			{		
			temp=num[i];
			num[i]=num[j];
			num[j]=temp;
			}
		}	
	}
	printf("\n The descending order is :");
	for(i=0;i<=9;i++)
	{
		printf("%d\t",num[i]);
	}
	getch();
}
