// Program to print whether char is uppercase
// Date : 3-JAN-2023

#include <stdio.h>

void main()
{
   char ch;

       printf("Enter a char :");
       ch = getche();

       if(isupper(ch))
          printf("\nUppercase");
       else
          printf("\nNon uppercase");

}


