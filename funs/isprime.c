// Program to create a function that returns true if number is prime
// Date : 11-JAN-2023

#include <stdio.h>



int isprime(int n)
{
  int i;

     for(i = 2; i <= n/2 ; i ++)
     {
        if (n % i == 0)
           return 0; // false as it is not prime
     }
     return 1; // prime
}


void main()
{
       if( isprime(37))
            printf("Prime");
       else
            printf("Not prime");
}


