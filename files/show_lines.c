// show contents of a file

#include <stdio.h>

void main()
{
  FILE * fp;
  char filename[30], line[200], *cp;
  int ch;

       printf("Enter filename :");
       gets(filename);

       fp = fopen(filename, "rt");

       if (fp == NULL)
       {
           printf("Sorry! Could not create file!");
           exit(1);
       }

       while(1)
       {
          cp = fgets(line, 200, fp); // read a line
          if(cp == NULL)  // EOF
             break;

          printf("%s",line);
       }

       fclose(fp);
}
