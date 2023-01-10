// Program to print position where strings mismatch
// Date : 10-JAN-2023

#include <stdio.h>

void main()
{
    char st1[20], st2[20];
    int i, mismatch_found = 0;

       printf("Enter string 1 :");
       gets(st1);

       printf("Enter string 2 :");
       gets(st2);


       for(i = 0; st1[i] != '\0' || st2[i] != '\0'; i++)
       {
            if(st1[i] != st2[i])
            {
                printf("Mismatch at %d", i);
                mismatch_found = 1;
                break;
            }
       }

       if(!mismatch_found)
        printf("No mismatch found!");
}




