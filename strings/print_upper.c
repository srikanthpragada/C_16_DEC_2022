// Program to print only uppercase letters
// Date : 7-JAN-2023

#include <stdio.h>

void main()
{
    char st[20];
    int i;

       i = 10;
       printf("Enter string :");
       gets(st);

       for(i = 0;  st[i] != '\0' ; i ++)
       {
          if(isupper(st[i]))   //   st[i] >= 65 && st[i] <= 90
             printf("%c",st[i]);
       }
}


