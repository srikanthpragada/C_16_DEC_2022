// Program to create a function that returns pos of a number in the array
// Date : 11-JAN-2023

#include <stdio.h>

int search(int a[10], int n)
{
  int i;

     for(i = 0; i < 10 ; i ++)
     {
        if (a[i] == n)
           return i; // found and return pos
     }

     return -1 ; // not found
}

void main()
{
  int arr[10] = {10,99,44,55,66,77,88,90,12,24};
  int pos;

       pos = search(arr,95);
       printf("%d", pos);
}


