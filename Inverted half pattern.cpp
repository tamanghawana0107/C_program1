/*WAP to print a pattern using nested for loop.
*	*	*	*	*
*	*	*	*	
*	*	*	
*	*	
*			*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0;
	for(i=1;i<=5;i++)
	{
		for(j=i;j<=5;j++)
		{
			printf("\t*");
		}
		printf("\n");
	}
	getch();
}
