// Program to print square of a number taken from user
// Date : 20-DEC-2022

#include <stdio.h>

void main()
{
    int num, cube; // declare variables

      // input
      printf("Enter number :");
      scanf("%d", &num);

      // process
      cube = num * num * num;

      // output
      printf("Cude of %d is %d", num, cube);
}
