// Program to print count of factors
// Date : 02-JAN-2023

#include <stdio.h>

void main()
{
   int i, n, count = 0;

      printf("Enter a number :");
      scanf("%d",&n);

      for(i = 2; i <= n/2; i ++)
      {
         if(n % i == 0)
            count ++;
      }

      printf("Count = %d", count);
}


