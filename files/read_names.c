// read names from file names.txt

#include <stdio.h>

void main()
{
  FILE * fp;
  int ch;

       fp = fopen("names.txt", "rt");

       if (fp == NULL)
       {
           printf("Sorry! Could not create file!");
           exit(1);
       }

       while(1)
       {
           ch = fgetc(fp);
           if (ch == EOF)
             break;

           putch(ch);
       }

       fclose(fp);
}
