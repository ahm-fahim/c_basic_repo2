#include <stdio.h>

int main()
{
    int x = 5;
    int *ptr;
    ptr = &x;

    printf("Value of X = %d\n", x);
    printf("Address of X = %d\n", &x);
    printf("Pointer address: %d\n",ptr);
    printf("Pointer value: %d\n", *ptr);
    printf("Pointer address: %d\n", &ptr);


    return 0;
}