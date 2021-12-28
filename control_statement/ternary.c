#include <stdio.h>

int main()
{
    int num1, num2, larger;

    scanf("%d %d", &num1, &num2);

    larger = num1>num2 ? num1 : num2 ;
    printf("%d\n", larger);

    return 0;
}