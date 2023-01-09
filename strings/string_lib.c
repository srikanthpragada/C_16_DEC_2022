// Program to demo string functions
// Date : 9-JAN-2023

#include <stdio.h>

void main()
{
    char st1[20], st2[20];

       printf("Enter string :");
       gets(st1);

       //st2 = st1;
       strcpy(st2, st1);

       strupr(st2);

       puts(st2);


}


