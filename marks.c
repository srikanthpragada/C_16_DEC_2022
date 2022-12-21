// Program to take marks in 2 subjects and print total and avg
// Date : 21-DEC-2022

#include <stdio.h>

void main()
{
    int m1, m2, total;
    float avg;

      // input
      printf("Enter marks in 2 subjects :");
      scanf("%d%d", &m1, &m2);

      // process
      total = m1 + m2;
      avg = total / 2.0;

      // output
      printf("Total   = %d\n", total);
      printf("Average = %.2f\n", avg);
}

