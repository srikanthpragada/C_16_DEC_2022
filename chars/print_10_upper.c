// Program to print all char in upper
// Date : 4-JAN-2023

#include <stdio.h>

void main()
{
   char ch, i;

       printf("Enter 10 chars :");
       for(i = 1; i <= 10; i ++)
       {
          ch = getch();
          putch(toupper(ch));
       }
}


