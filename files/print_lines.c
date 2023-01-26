// show contents of a file

#include <stdio.h>

void main(int argc, char * argv[])
{
  FILE * fp;
  char line[200], *cp;
  int ch;

       if(argc < 2)
       {
           printf("Usage : print_lines  filename");
           return;
       }

       fp = fopen(argv[1], "rt");

       if (fp == NULL)
       {
           printf("Sorry! Could not open file --> %s", argv[1]);
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
