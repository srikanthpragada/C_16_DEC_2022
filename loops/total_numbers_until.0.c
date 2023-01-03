// Program to print total numbers until 0 is given
// Date : 2-JAN-2022

#include <stdio.h>

void main()
{
   int n, total = 0;

      while(1)  // always true
      {
         printf("Enter a number [0 to stop] :");
         scanf("%d",&n);

         if (n == 0)
            break;

         if (n < 0)
            continue;

         total += n;
      }

      printf("Total = %d", total);
}


