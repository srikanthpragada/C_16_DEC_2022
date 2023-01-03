// Program to print smallest factor
// Date : 03-JAN-2023

#include <stdio.h>

void main()
{
   int i, n , found = 0;

      printf("Enter a number :");
      scanf("%d",&n);

      for(i = 2; i <= n/2; i ++)
      {
         if(n % i == 0) {
           printf("%d ",i);
           found = 1;
           break;
         }
      }

      if(found == 0)  // prime numbers so display number as smallest factor
        printf("%d ", n);
}


