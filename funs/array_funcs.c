// Functions using array

#include <stdio.h>

void print(int arr[], int len)  // int * arr
{
   int i;

     for(i = 0; i < len; i ++)
        printf("%d ", arr[i]);
}

void main()
{
 int a[5] = {1,2,3,4,5};
 int b[] = {1,2,3};


      print(a, 5);
      print(b, 3);

}
