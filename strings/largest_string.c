// Program to print largest of 5 strings
// Date : 9-JAN-2023

#include <stdio.h>

void main()
{
    char st[20], largest[20];
    int i, result;

       strcpy(largest, "");    //  largest[0] = '\0';
       for(i = 1; i <= 5; i ++)
       {
         printf("Enter string :");
         gets(st);

         result = strcmp(st, largest);

         if(result > 0)
             strcpy(largest, st);
     }

     printf("\nLargest = %s", largest);

}




