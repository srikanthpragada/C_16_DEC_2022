// Program to create a function to take a number and return sum of digits
// Date : 12-JAN-2023

#include <stdio.h>

int sum_of_digits(int n)
{
   int sum = 0;

     while(n > 0)
     {
         sum = sum + n % 10;
         n = n / 10;
     }

     return sum;
}

void main()
{

   printf("Sum = %d\n", sum_of_digits(33234));
}


