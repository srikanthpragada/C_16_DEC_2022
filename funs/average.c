// Program to understand difference between function definition and declaration
// Date : 12-JAN-2023

#include <stdio.h>

// function declaration or Prototype Declaration
float average(int, int);

void main()
{
  float f;

     f = average(10, 20);
     printf("%f", f);
}

// function definition
float average(int a, int b)
{
    return  (a + b) / 2;
}


