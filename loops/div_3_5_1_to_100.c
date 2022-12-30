// Program to print numbers that are divisible by 3 or 5 between 1 and 100
// Date : 30-DEC-2022

#include <stdio.h>

void main()
{
   int i;

       for(i = 3; i <= 100; i++)
       {
          if(i % 3 == 0 || i % 5 == 0)
              printf("%d ",i);
       }
}


