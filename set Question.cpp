#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,x=0;
	while(i<20)
	{
		if(i%5==0)
		{
			x+=i;
			printf("%d",x);
		}
		++i;
	}
	printf("\n x=%d",x);
}
