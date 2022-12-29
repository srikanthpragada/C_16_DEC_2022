// Program to print no. of days in a month
// Date : 29-DEC-2022

#include <stdio.h>

void main()
{
   int month;

      printf("Enter month number:");
      scanf("%d",&month);

      if(month == 2)
         printf("28");
      else
        if(month == 4 || month == 6 || month == 9 || month == 11)
           printf("30");
        else
           printf("31");
}


