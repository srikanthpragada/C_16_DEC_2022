// Program to print numbers between two numbers
// Date : 31-DEC-2022

#include <stdio.h>

void main()
{
   int sn, en, i;

      printf("Enter starting and ending number :");
      scanf("%d%d",&sn,&en);

      for(i = sn; i <= en; i ++)
      {
          printf("%d ",i);
      }
}


