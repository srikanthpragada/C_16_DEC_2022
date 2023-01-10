// Program to print a line with given length and a message
// Date : 10-JAN-2023

#include <stdio.h>

// user-defined functions
void line(int len)
{
 int i;

     for(i = 1; i <= len ; i ++)
         putch('-');
}

void main()
{

     line(20);
     printf("\nSrikanth Technologies\n");
     line(30);
}


