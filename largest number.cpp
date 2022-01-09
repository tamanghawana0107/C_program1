/* C Program to Find Largest Number in an Array */
#include<stdio.h>
#include<conio.h>
int main()
{
  int a[10],size,i=0, Largest, Position;
  
  printf("\nPlease Enter the size of an array \n");
  scanf("%d",&size);
  
  printf("\nPlease Enter %d elements of an array: \n", size);
  for(i=0; i<size; i++)
   {
     scanf("%d",&a[i]);
   }   
  
  Largest = a[0];
  for(i=1; i<size; i++)
   {
    if(Largest<a[i])
     {
       Largest=a[i];
       Position = i;
     }   
   }
  
  printf("\nLargest element in an Array = %d", Largest);
  printf("\nIndex position of the Largest element = %d", Position);
  
  return 0;
}
