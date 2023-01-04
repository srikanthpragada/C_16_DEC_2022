// Program to validate input as password
// Date : 4-JAN-2023

#include <stdio.h>

void main()
{
   char ch, i, upper = 0, digit = 0;

       printf("Enter password :");
       for(i = 1; i <= 8; i ++)
       {
          ch = getch();
          putch('*');
          if (isdigit(ch))
              digit = 1;
          else
            if(isupper(ch))
               upper = 1;
       }

       if(digit == 1 && upper == 1)
          printf("\nValid Password");
       else
          printf("\nInvalid Password");

}


