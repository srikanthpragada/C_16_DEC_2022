// Array vs. Pointer

#include <stdio.h>



void main()
{
 int a[5] = {1,2,3,4,5};
 int *p;

    p = a;

    printf("%d \n", a[0]);
    printf("%d \n", *a);
    printf("%d \n", p[0]);
    printf("%d \n", *p);

}
