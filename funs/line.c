// Program to print a line and a message
// Date : 10-JAN-2023

#include <stdio.h>

// user-defined functions
void line()
{
 int i;

     for(i = 1; i <= 20; i ++)
         putch('-');
}

void main()
{

     line();
     printf("\nSrikanth Technologies\n");
     line();

}


