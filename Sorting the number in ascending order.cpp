//WAP to sort the number in ascending order.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,temp,num[10]={23,64,34,6,123,65,75,1,4,8};
	for(i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(num[i]<num[j])
			temp=num[i];
			num[i]=num[j];
			num[i]=temp;
		}
	}
	printf("The ascending order of the numbers is :%d\t",num[i]);
	getch();
}
