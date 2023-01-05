// Program to count how many times a number is found in the array
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
           printf("%5d", a[i]);
       }

       printf("\nEnter a number :");
       scanf("%d", &n);

       for(i = 0; i < 20; i ++)
       {
           if(a[i] == n)
              count ++;
       }

       printf("Count = %d", count);

}


