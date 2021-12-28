#include <stdio.h>

int main()
{
    int arr[20][20], trans[20][20], i, j, row, col, sum = 0, upper_tri_sum = 0, lower_tri_sum = 0;

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

    // diagonal

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            if (i == j)
            {
                sum += arr[i][j];
            }
            if (i < j)
            {
                upper_tri_sum += arr[i][j];
            }
            if (i > j)
            {
                lower_tri_sum += arr[i][j];
            }
        }
    }
    printf("Sum: %d\n", sum);
    printf("Upper triangle sum: %d\n", upper_tri_sum);
    printf("Lower triangle sum: %d\n", lower_tri_sum);

    return 0;
}