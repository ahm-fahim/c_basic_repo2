#include <stdio.h>

int main()
{
    int i;
    scanf("%d", &i);

label1: //label
    printf("I am from label 1\n");
    i++;

    if (i == 1)
    {
        goto label1;
    }

    return 0;
}