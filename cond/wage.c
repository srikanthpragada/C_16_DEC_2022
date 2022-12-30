// Program to print wage based on hours and weekday
// Date : 30-DEC-2022

#include <stdio.h>

void main()
{
   int hours, weekday, wage ;

      printf("Enter hours and weekday [1-7]:");
      scanf("%d%d",&hours, &weekday);

      switch(weekday)
      {
         case 1 :
         case 2 :
         case 3 : wage = hours * 100;
                  break;
         case 4 :
         case 5 : wage = hours * 120;
                  break;
         case 6 : wage = hours * 150;
                  break;
         default: wage = hours * 200;
      }

      if (wage > 1000)
         wage = wage + wage * 0.10; // 10% bonus

      printf("Wage = %d", wage);
}


