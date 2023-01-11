// Program to create a function that returns next even number
// Date : 11-JAN-2023

#include <stdio.h>



int iseven(int n)
{
    return n % 2 == 0 ? 1 : 0;
}

int next_even(int n)
{
   return  iseven(n) ? n + 2 : n + 1;
}

void main()
{
 int v;

     v = next_even(10);
     v = next_even(15);

}


