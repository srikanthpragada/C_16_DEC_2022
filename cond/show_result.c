// Program to print result by taking marks
// Date : 22-DEC-2022

#include <stdio.h>

void main()
{
   int marks;

      printf("Enter marks :");
      scanf("%d", &marks);

      if(marks >= 50)
         printf("Passed");
      else
         printf("Failed");
}
