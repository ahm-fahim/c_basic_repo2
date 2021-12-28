#include <stdio.h>

int main()
{
    int myArray[100], number;

    printf("Enter the number of trems: ");
    scanf("%d", &number);

    myArray[0] = 0;
    myArray[1] = 1;

    for (int i = 2; i < number; i++)
    {
        myArray[i] = myArray[i - 1] + myArray[i - 2];
    }

    printf("\n");

    for (int i = 0; i < number; i++)
    {
        printf("%d ", myArray[i]);
    }
}