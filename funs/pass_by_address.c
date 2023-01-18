// Pass by address or reference

#include <stdio.h>

void zero(int * p)
{
    *p = 0;
}

void main()
{
  int v = 100;

     zero(&v);
     printf("%d", v);
}
