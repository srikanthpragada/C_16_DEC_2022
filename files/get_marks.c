// Read marks for the given rollno from marks.dat

#include <stdio.h>

void main()
{
  FILE * fp;
  int i, count, found = 0, marks, pos, rollno;

       fp = fopen("marks.dat", "rb");

       if (fp == NULL)
       {
           printf("Sorry! Could not create file!");
           exit(1);
       }

       printf("Enter rollno :");
       scanf("%d", &rollno);

       pos = 1;
       while(1)
       {
          count =  fread(&marks, sizeof(int), 1, fp);
          if(count == 0)
            break;

          if(rollno == pos) {
             printf("%d\n", marks);
             found = 1;
             break;
          }

          pos ++;
       }


       fclose(fp);

       if(!found)
         printf("Sorry! Rollno not found!");
}
