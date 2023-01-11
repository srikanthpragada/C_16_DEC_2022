// Program to create a function that prints given number in reverse
// Date : 11-JAN-2023

#include <stdio.h>


void reverse(int n)
{
   while(n > 0)
   {
       printf("%d", n % 10);
       n = n / 10;
   }
}

void main()
{
     reverse(125);
}


