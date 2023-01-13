// Program to understand scope and extent
// Date : 12-JAN-2023

#include <stdio.h>

int g = 100; // static extent

void main()
{
  float f;

     g = 1;

}

void fun(int v)
{
  int n, g; // local extent

     g = 10;

}


