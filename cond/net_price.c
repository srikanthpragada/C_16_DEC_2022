// Program to print net price after discount, which is based on price
// Date : 22-DEC-2022

#include <stdio.h>

void main()
{
   int price, discount, net_price;

      printf("Enter price :");
      scanf("%d", &price);

      if(price > 1000)
         discount = price * 0.20;
      else
         discount = price * 0.10;


      net_price = price - discount;
      printf("Net price = %d", net_price);
}
