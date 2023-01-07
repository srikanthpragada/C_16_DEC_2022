// Program to search in 2d
// Date : 7-JAN-2023

#include <stdio.h>

void main()
{
   int a[5][5];
   int i, j, n, found = 0;

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

       printf("\nEnter a number :");
       scanf("%d", &n);

       for(i = 0; i < 5; i ++)
       {
          for(j = 0; j < 5; j ++)
          {
             if(a[i][j] == n)
             {
                 printf("Found at %d, %d", i,j);
                 found = 1;
                 break;
             }
          }
          // Terminate outer loop if number is found
          if(found)
             break;
       }

       if(!found)
          printf("Sorry! number not found!");
}


