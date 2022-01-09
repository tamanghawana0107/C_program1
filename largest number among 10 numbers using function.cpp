//WAP to find the largest number among 10 numbers using array passing into a function ....
#include<stdio.h>
#include<conio.h>
int largestnum(int a[]);
int main()
{
	int a[10];
	int i=0,result=0;
	for(i=0;i<=9;i++)
	{
		printf("\n Enter the %d number:",i+1);
		scanf("%d",&a[i]);
	}
	result=largestnum(a);
	printf("\n The largest number between the 10 numbers are :%d");
	getch();
}
int largestnum(int b[])
{
	int largest=b[0],j=0,size=0;
	for(j=1;j<size;j++)
	{
		if(largest<b[j])
		{
			largest=b[j];
		}
	}
	return largest;
}
