// Program to create a function that prints the given array in reverse
// Date : 11-JAN-2023

#include <stdio.h>
int count_digits(char s[20])
{
   int i, count = 0;

     for(i = 0; s[i] != '\0' ; i ++)
     {
         if (isdigit(s[i]))
             count ++;
     }

     return count;
}

void main()
{

    printf("%d ", count_digits("abc123xyz45"));

}


