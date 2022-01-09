//WAP to find the average of 10 numbers using array by passing it in a function...
#include<stdio.h>
#include<conio.h>
float avg(float romiya[]);
int main()
{   
	float result=0;
	float romiya[10];
	int i=0;
	for(i=0;i<=9;i++)
	{
		printf("\n Enter the %d number::",i+1);
		scanf("%f",&romiya[i]);
	}
	result=avg(romiya);
	printf("\n The average is %f",result);
	getch();
}
float avg(float paadante[])
{
	float average=0,s=0;
	int j=0;
	for(j=0;j<=9;j++)
	{
		s=s+paadante[j];
	}
	average = s/10;
	return average;
}
