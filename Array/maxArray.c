#include <stdio.h>

int main()
{
    int myArray[100];
    int index, number;

    printf("How many number you wanna input: ");
    scanf("%d", &number);

    for (index = 0; index < number; index++)
    {
        scanf("%d", &myArray[index]);
    }

    int max = myArray[0];
    int min = myArray[0];

    for (index = 0; index < number; index++)
    {
        if (max < myArray[index])
        {
            max = myArray[index];
        }
        else
        {
            min = myArray[index];
        }
    }
    printf("The maximum number: %d\n", max);
    printf("The minimum number: %d\n", min);

    return 0;
}