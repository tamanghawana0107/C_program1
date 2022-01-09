//WAP to print the numbers in descending order in dynamic input system...
#include<stdio.h>
#include<conio.h>
int main()
{
	int size=30;
	int num[size];
	int i=0,j=0,temp=0,count=0;
	label1:
	printf("\n\nEnter the number of terms you want to arrange in descending order:");
	scanf("%d",&count);
	if(count>size)
	{
		printf("\n please enter number only upto 30 numbers!!!");
		goto label1;
	}
	for(i=0;i<=count-1;i++)
	{
		scanf("%d",&num[i]);
	}
	for(i=0;i<=count-1;i++)
	for(j=i+1;j<=count-1;j++)
	{
		if(num[i]<num[j])
		{
			temp=num[i];
			num[i]=num[j];
			num[j]=temp;
		}
	}
	printf("The numbers in descending order are:");
	for(i=0;i<=count-1;i++)
	{
		printf("%d\t",num[i]);
	}
	getch();
}
