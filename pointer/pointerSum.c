#include <stdio.h>

int main()
{
    int x = 100, y = 100, sum = 0;

    int *ptr1 = &x, *ptr2 = &y;

    sum = *ptr1 + *ptr2;

    printf("Sum: %d\n", sum);

    return 0;
}