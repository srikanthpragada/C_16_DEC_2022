// Program to print square of a number taken from user
// Date : 20-DEC-2022

#include <stdio.h>

void main()
{
    int num, square; // declare variables

      // input
      printf("Enter number :");
      scanf("%d", &num);

      // process
      square = num * num;

      // output
      printf("Square of %d is %d", num, square);
}
