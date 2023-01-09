// Program to compare 2 string
// Date : 9-JAN-2023

#include <stdio.h>

void main()
{
    char st1[20], st2[20];
    int result;

       printf("Enter string 1 :");
       gets(st1);

       printf("Enter string 2 :");
       gets(st2);

       result = strcmp(st1,st2);

       if(result == 0)
          printf("Equal");
       else
        if(result > 0)
           printf("First string is bigger");
        else
           printf("Second string is bigger");
}


