// Program to replace digits with .
// Date : 9-JAN-2023

#include <stdio.h>

void main()
{
    char st[20];
    int i;


       printf("Enter string :");
       gets(st);

       for(i = 0;  st[i] != '\0' ; i ++)
       {
          if(isdigit(st[i]))
             st[i] = '.';
       }

       puts(st);
}


