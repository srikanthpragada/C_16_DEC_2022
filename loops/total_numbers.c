// Program to print total of 5 numbers
// Date : 31-DEC-2022

#include <stdio.h>

void main()
{
   int i, n, total = 0;

      for(i = 1; i <= 5; i ++)
      {
         printf("Enter a number :");
         scanf("%d",&n);

         total += n;
      }

      printf("Total = %d", total);
}


