// Program to print net salary
// Date : 22-DEC-2022

#include <stdio.h>

void main()
{
   int salary, hra, da, it, gross_salary, net_salary;

       // input
      printf("Enter salary :");
      scanf("%d", &salary);

      hra = salary * 0.30;
      da = salary * 0.20;

      gross_salary = salary + hra + da;
      it = gross_salary * 0.10;
      net_salary  = gross_salary - it;

      printf("Net salary = %d", net_salary);
}
