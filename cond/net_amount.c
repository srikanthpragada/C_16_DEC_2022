// Program to print net price after discount, which is based on price
// Date : 28-DEC-2022

#include <stdio.h>

void main()
{
   int qty, price, discount, amount;

      printf("Enter price :");
      scanf("%d", &price);

      printf("Enter qty :");
      scanf("%d", &qty);

      amount = price * qty;

      if (qty >= 3)
         discount = amount * 0.40;
      else
        if(qty >= 2)
           discount = amount * 0.20;
        else
           discount = amount * 0.10;

     printf("Amount      : %6d\n",amount);
     printf("- Discount  : %6d\n",discount);
     printf("              ------\n");
     printf("Net Amount  : %6d\n",amount - discount);
}


