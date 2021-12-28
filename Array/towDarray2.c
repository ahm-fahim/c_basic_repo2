#include <stdio.h>

int main()
{
    int myArray[100][100], row, col;

    printf("how many row and column u want:");
    scanf("%d %d", &row, &col);

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("arr[%d][%d] = ", i, j);
            scanf("%d", &myArray[i][j]);
        }
    }

    printf("\nOur array is\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", myArray[i][j]);
        }
        printf("\n");
    }
    return 0;
}