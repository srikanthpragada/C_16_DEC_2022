// Program to fill and print 2d array of 5X5
// Date : 6-JAN-2023

#include <stdio.h>

void main()
{
   int a[5][5];
   int i, j;

       for(i = 0; i < 5; i ++)
       {
         for(j = 0; j < 5; j ++)
         {
           if(i == j)  // diagonal
               a[i][j] = 1;
           else
               a[i][j] = 0;
         }
       }

       // Print
       for(i = 0; i < 5; i ++)
       {
         for(j = 0; j < 5; j ++)
         {
            printf("%5d", a[i][j]);
         }
         printf("\n");
       }


}


