// Program to print whether char is uppercase
// Date : 3-JAN-2023

#include <stdio.h>

void main()
{
   char ch;

       printf("Enter a char :");
       ch = getchar();

       if(ch >= 65 && ch <= 90)
          printf("Uppercase");
       else
          printf("Non uppercase");

}


