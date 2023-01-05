// Program to print even first and then odd numbers of array
// Date : 5-JAN-2023

#include <stdio.h>

void main()
{
   int a[20];
   int i, n, count  = 0;

       srand(time(0)); // initialize random seed

       for(i = 0; i < 20; i ++)
       {
           a[i] = rand() % 100;
           printf("%3d", a[i]);
       }

       // Print even numbers
       printf("\nEven Numbers\n");
       for(i = 0; i < 20; i ++)
       {
           if(a[i] % 2 == 0)
              printf("%d\n", a[i]);
       }

       // Print odd numbers
       printf("\nOdd Numbers\n");
       for(i = 0; i < 20; i ++)
       {
           if(a[i] % 2 != 0)
              printf("%d\n", a[i]);
       }



}


