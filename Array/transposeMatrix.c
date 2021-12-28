#include <stdio.h>

int main()
{
    int arr[20][20], trans[20][20], i, j, row, col;

    printf("Rows & columns: ");
    scanf("%d %d", &row, &col);

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("Arr[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // printf
    printf("\nArr1[%d][%d] = ", row, col);

    for (i = 0; i < row; i++)
    {
        printf("\n\t");
        for (j = 0; j < col; j++)
        {
            printf("%d, ", arr[i][j]);
        }
        printf("\n");
    }

    // transpose

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            trans[j][i] = arr[i][j];
        }
    }
    printf("Transpose Matrix\n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d ", trans[i][j]);
        }
        printf("\n");
    }

    return 0;
}