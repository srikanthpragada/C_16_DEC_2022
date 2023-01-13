// Program to create a function to return factorial using recursion
// Date : 13-JAN-2023

#include <stdio.h>

int factorial(int n)
{
   if(n == 1)
    return 1;

   return n * factorial(n - 1);
}

void main()
{
    printf("%d ", factorial(5));
}


