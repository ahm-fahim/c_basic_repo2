#include <stdio.h>

int main()
{
    int a = 32, b = 12, c;

    c = a & b;
    printf("C = %d\n", c);

    c = a | b;
    printf("C = %d\n", c);

    c = a ^ b;
    printf("C = %d\n", c);

}