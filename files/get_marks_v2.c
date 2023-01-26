// Read marks for the given rollno from marks.dat using random access

#include <stdio.h>

void main()
{
  FILE * fp;
  int i, marks,count, pos, rollno;

       fp = fopen("marks.dat", "rb");
       if (fp == NULL)
       {
           printf("Sorry! Could not create file!");
           exit(1);
       }

       printf("Enter rollno :");
       scanf("%d", &rollno);

       // find out pos to move the file pointer
       pos = (rollno - 1) * sizeof(int);
       fseek(fp, pos, SEEK_SET);

       // read marks
       count = fread(&marks, sizeof(int), 1, fp);
       if(count == 0)
          printf("Sorry! Invalid roll number");
       else
          printf("Marks = %d", marks);

       fclose(fp);

}
