// Program to print total of 5 numbers or until 0 is given
// Date : 2-JAN-2022

#include <stdio.h>

void main()
{
   int i, n, total = 0;

      for(i = 1; i <= 5; i ++)
      {
         printf("Enter a number :");
         scanf("%d",&n);

         if (n == 0)
            break;

         total += n;
      }

      printf("Total = %d", total);
}


