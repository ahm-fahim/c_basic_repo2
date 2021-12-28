#include <stdio.h>

int main()
{
    int arr1[5] = {1, 2, 3, 4, 5}, arr2[5], i;

    printf("Array-1 = [");

    for (i = 0; i < 5; i++)
    {
        printf("%d, ", arr1[i]);
    }
    printf("]\n");
    // copy

    for (i = 0; i < 5; i++)
    {
        arr2[i] = arr1[i];
    }

    // arr2
    printf("\nArray-2 = [");
    for (i = 0; i < 5; i++)
    {
        printf("%d, ", arr2[i]);
    }
    printf("]\n");

    return 0;
}