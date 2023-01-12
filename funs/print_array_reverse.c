// Program to create a function that prints the given array in reverse
// Date : 11-JAN-2023

#include <stdio.h>


void print_reverse(int a[5])
{
   int i;

     for(i = 4; i >= 0 ; i --)
        printf("%5d", a[i]);
}

void main()
{
  int arr[] = {10,20,30,40,50};
  int marks[] = {70,50,77,89,50};

    print_reverse(arr);

}


