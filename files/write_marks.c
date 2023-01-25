// Write marks into marks.dat

#include <stdio.h>

void main()
{
  FILE * fp;
  int i, marks;

       fp = fopen("marks.dat", "wb");

       if (fp == NULL)
       {
           printf("Sorry! Could not create file!");
           exit(1);
       }

       srand(time(0));
       for(i = 1; i <= 20; i ++)
       {
           marks = rand() % 100;
           fwrite(&marks, sizeof(int), 1, fp);
       }

       fclose(fp);

}
