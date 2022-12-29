// Program to print net salary
// Date : 29-DEC-2022

#include <stdio.h>

void main()
{
   int salary, grade, hra, da, net_salary;

      printf("Enter salary:");
      scanf("%d",&salary);

      printf("Enter Grade:");
      scanf("%d",&grade);

      if (grade == 1)
      {
          hra = salary * 30 / 100;
          da = salary  * 20 / 100;
      }
      else
      {
          hra = salary * 15 / 100;
          da = salary  * 10 / 100;
      }

      net_salary = salary + hra + da;
      printf("Net Salary = %d", net_salary);
}


