// Program to print string vertically
// Date : 7-JAN-2023

#include <stdio.h>

void main()
{
    char st[20];
    int i;

       printf("Enter string :");
       gets(st);

       for(i = 0;  st[i] != '\0' ; i ++)
           printf("%c %d\n", st[i], st[i]);
}


