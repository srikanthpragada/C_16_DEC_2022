// Write names into file

#include <stdio.h>

void main()
{
  FILE * fp;
  char name[30];
  int i;

       fp = fopen("names.txt", "wt");

       if (fp == NULL)
       {
           printf("Sorry! Could not create file!");
           exit(1);
       }

       for(i = 1; i <= 5; i ++)
       {
           printf("Enter name :");
           gets(name);

           fprintf(fp,"%s\n",name);
       }

       fclose(fp);

}
