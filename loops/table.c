// Program to print table for a given number
// Date : 31-DEC-2022

#include <stdio.h>

void main()
{
   int n, i;

      printf("Enter a number :");
      scanf("%d",&n);

      for(i = 1; i <= 10; i ++)
          printf("%2d * %2d  = %3d\n", n, i, n * i);

}


