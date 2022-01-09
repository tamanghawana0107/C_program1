#include <stdio.h>
int main()
{
  int r1, c1, r2, c2, i, j, k, sum = 0;
  int first[10][10], second[10][10], multiply[10][10];
  printf("Enter the number of rows and columns of first matrix  ");
  scanf("%d %d", &r1, &c1);
  printf("\nEnter the elements of first matrix\n");
  for (  i = 0 ; i < r1 ; i++ )
  {
    for ( j = 0 ; j < c1 ; j++ )
    {
      scanf("%d",*(first+i)+j);
  	}
  }
  flag:
  printf("\nEnter the number of rows and columns of second matrix   ");
  scanf("%d %d", &r2, &c2);
  if ( c1 != r2 )
  	{
    	printf("\nMatrices with entered orders can't be multiplied with each other.\n");
    	goto flag;
	}
  else
  {
    printf("\nEnter the elements of second matrix\n");
    for ( i = 0 ; i < r2 ; i++ )
    {
      for ( j = 0 ; j < c2 ; j++ )
      	{
        	scanf("%d",*(second+i)+j);
		}
	}
    for ( i = 0 ; i < r1 ; i++ )
    {
      for ( j = 0 ; j < c2 ; j++ )
      {
        for ( k = 0 ; k < r2 ; k++ )
        {
          sum = sum + *(*(first+i)+k)* *(*(second+k)+j);
        }
        *(*(multiply+i)+j) = sum;
        sum = 0;
      }
    }
}
    printf("Product of entered matrices:-\n");
 
    for ( i = 0 ; i < r1 ; i++ )
    {
      for ( j = 0 ; j < c2 ; j++ )
    {
        printf("%d\t", *(*(multiply+i)+j));
 	}
      printf("\n");
    }
  return 0;
}

