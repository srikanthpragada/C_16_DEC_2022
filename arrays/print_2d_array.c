// Program to fill and print 2d array of 5X5
// Date : 6-JAN-2023

#include <stdio.h>

void main()
{
   int a[5][5];
   int i, j;

       srand(time(0)); // initialize random seed

       for(i = 0; i < 5; i ++)
       {
         for(j = 0; j < 5; j ++)
         {
           a[i][j] = rand() % 100;
           printf("%5d", a[i][j]);
         }
         printf("\n");
       }

}


