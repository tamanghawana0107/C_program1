//WAP to use jumping statement and switch case both.
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
	int a,b,choice,Add,Sub,Mul,Div;
	while(1)
	{
		printf("\nMenu:");
		printf("\n1.Add\n2.Sub\n3.Mul\n4.Div\n5.Exit");
		printf("\nEnter any two number:\n");
		scanf("%d%d",&a,&b);
		printf("Enter your choice(1-5):");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				Add=a+b;
				printf("Addition = %d\n",Add);
			break;
			case 2:
				Sub=a-b;
				printf("Subtraction = %d\n",Sub);
			break;
			case 3:
				Mul=a*b;
				printf("Multiplication = %d\n",Mul);
			break;
			case 4:
				Div=a/b;
				printf("Division = %d\n",Div);
			break;
			case 5:
				exit(0);
			break;
			default:
				printf("\nYour choice of number is wrong please choose from(1-5).!!!\n\n");
		}
	}
	getch();
}
