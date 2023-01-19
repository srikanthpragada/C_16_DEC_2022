// Functions using array

#include <stdio.h>

void print(char * s)  // int * arr
{
   int i;

     for(i = 0; s[i] != '\0'; i ++)
        printf("%c\n", s[i]);
}

void main()
{
  char s[20] = "Hello";
  char * st;

     st = s;
     // s = st;
     print(s);

     scanf("%s", s);
     gets(s);

}
