// Program to create a function that prints the given array of 5 ints
// Date : 11-JAN-2023

#include <stdio.h>


void print_array(int a[5])
{
   int i;

     for(i = 0; i < 5; i ++)
        printf("%5d", a[i]);
}

void main()
{
  int arr[] = {10,20,30,40,50};
  int marks[] = {70,50,77,89,50};

    print_array(arr);
    printf("\n");
    print_array(marks);

}


