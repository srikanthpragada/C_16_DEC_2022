// Program to store random numbers in an array of 10 elements
// Date : 4-JAN-2023

#include <stdio.h>

void main()
{
   int a[10];
   int i;

       srand(time(0)); // initialize random seed

       for(i = 0; i < 10; i ++)
       {
           a[i] = rand() % 100;
           printf("%d\n", a[i]);
       }
}


