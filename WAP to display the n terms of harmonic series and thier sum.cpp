/*Write a program in C to display the n terms of harmonic series and their sum.
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms*/
#include<stdio.h>
#include<conio.h>
int main()
{
   int i=0,num=0;
   float sum=0;
   printf("Enter the number of terms : ");
   scanf("%d",&num);
   printf("\n\n");
   for(i=1;i<=num;i++)
   {
       if(i<num)
       {
     		printf("1/%d + ",i);
     		sum=sum+1/(float)i;
       }
     	if(i==num)
     	{
     	printf("1/%d ",i);
     	sum=sum+1/(float)i;
     	}
	}
		printf("\nThe %d terms of harmonic series is : %f \n",num,sum);
		getch();
}
