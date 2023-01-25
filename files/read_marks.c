// Read marks from marks.dat

#include <stdio.h>

void main()
{
  FILE * fp;
  int i, count, marks;

       fp = fopen("marks.dat", "rb");

       if (fp == NULL)
       {
           printf("Sorry! Could not create file!");
           exit(1);
       }

       while(1)
       {
          count =  fread(&marks, sizeof(int), 1, fp);
          if(count == 0)
            break;

          printf("%d\n", marks);
       }


       fclose(fp);

}
