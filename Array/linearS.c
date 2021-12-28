#include <stdio.h>

int main()
{
    int arr[5] = {33, 12, 53, 35, 3};
    int indexValue, position = -1;

    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", arr[i]);
    }

    printf("\nWhich number index you want to know: ");
    scanf("%d", &indexValue);

    for (int i = 0; i < 5; i++)
    {
        if (indexValue == arr[i])
        {
            position = i;
            break;
        }
    }
    if (position == -1)
    {
        printf("404 not found!");
    }
    else
    {
        printf("The porsition of '%d' is : index[%d]\n", indexValue, position);
    }

    return 0;
}