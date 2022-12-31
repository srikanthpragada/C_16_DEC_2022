// Program to print factors of a number
// Date : 31-DEC-2022

#include <stdio.h>

void main()
{
   int i, n;

      printf("Enter a number :");
      scanf("%d",&n);

      for(i = 2; i <= n/2; i ++)
      {
         if(n % i == 0)
           printf("%d ",i);
      }


}


