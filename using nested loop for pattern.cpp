/*WAP to print a pattern using nested for loop.
*	#	*	#	*
*	#	*	#	*
*	#	*	#	*
*	#	*	#	*
*	#	*	#	*		*/

#include<stdio.h>
#include<conio.h>
int main()
{
	int i=0,j=0;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=2;j++)
		{
			printf("\t *");
			printf("\t #");
		}
		printf("\n");
		printf("\n"); 
	}
	getch();
}
