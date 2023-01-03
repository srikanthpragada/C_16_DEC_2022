// Program to print factorial
// Date : 02-JAN-2023

#include <stdio.h>

void main()
{
   int i, n, fact = 1;

      printf("Enter a number :");
      scanf("%d",&n);

      for(i = 2; i <= n; i ++)
      {
          fact = fact * i;
      }

      printf("Factorial  = %d", fact);
}


