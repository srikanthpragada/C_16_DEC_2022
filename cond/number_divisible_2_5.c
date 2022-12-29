// Program to print whether number is divisible by 2 and 5
// Date : 29-DEC-2022

#include <stdio.h>

void main()
{
   int num;

      printf("Enter number:");
      scanf("%d",&num);

      if(num % 2 == 0)
        if(num % 5 == 0)
           printf("By 2 and 5");
        else
           printf("By 2 only");
      else
        if(num % 5 == 0)
           printf("By 5 only");
        else
           printf("By None");
}


