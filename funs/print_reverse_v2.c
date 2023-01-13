// Program to create a function that prints given number in reverse
// Date : 11-JAN-2023

#include <stdio.h>

void reverse(int n)
{
    if(n > 0)
    {
      printf("%d", n % 10);
      reverse(n / 10);  // recursion
    }
}

void print_reverse(int n)
{
    printf("\n%d",n);
    if(n > 1)
      print_reverse(n - 1);

}

void main()
{
     reverse(125);
     print_reverse(10);
}


