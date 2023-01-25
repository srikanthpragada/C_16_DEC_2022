// Read marks for the given rollno from marks.dat

#include <stdio.h>

void main()
{
  FILE * fp;
  int i, marks, pos, rollno;

       fp = fopen("marks.dat", "rb");

       if (fp == NULL)
       {
           printf("Sorry! Could not create file!");
           exit(1);
       }

       printf("Enter rollno :");
       scanf("%d", &rollno);



       fclose(fp);


}
