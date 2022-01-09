//WAP to print the sum of ten natural no.
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,sum=0;
	printf("The ten natural no is:");
	for(i=1;i<=10;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
	getch();
}
