// Program to print largest of 5 strings
// Date : 9-JAN-2023

#include <stdio.h>
#include <string.h>
#include <conio.h>

void main()
{
    char st[20];
    int i;


         printf("Enter string :");
         gets(st);

         for(i = strlen(st) - 1; i >= 0; i --)
             putch(st[i]);

}




