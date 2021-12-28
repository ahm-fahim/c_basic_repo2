#include <stdio.h>

int main()
{
    int arr1[100][100], arr2[100][100], multiArr[100][100], arr1Row, arr1Col, arr2Row, arr2Col, i, j, k, sum = 0;

    // input rows and columns for arr1 and arr2
    printf("Arr1 Rows & columns: ");
    scanf("%d %d", &arr1Row, &arr1Col);

    printf("Arr2 Rows & columns: ");
    scanf("%d %d", &arr2Row, &arr2Col);

    while (arr1Col != arr2Row)
    {
        printf("Arr1Col != arr2Row TRY AGAIN\n");

        printf("Arr1 Rows & columns: ");
        scanf("%d %d", &arr1Row, &arr1Col);

        printf("Arr2 Rows & columns: ");
        scanf("%d %d", &arr2Row, &arr2Col);
    }

    // input row and column value

    // arr1
    for (i = 0; i < arr1Row; i++)
    {
        for (j = 0; j < arr1Col; j++)
        {
            printf("Arr1[%d][%d] = ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    printf("\n");

    // arr2
    for (i = 0; i < arr2Row; i++)
    {
        for (j = 0; j < arr2Col; j++)
        {
            printf("Arr2[%d][%d] = ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }

    // print arr1 and arr2

    // arr1
    printf("\nArr1[%d][%d] = ", arr1Row, arr1Col);
    for (i = 0; i < arr1Row; i++)
    {
        printf("\n\t");
        for (j = 0; j < arr1Col; j++)
        {
            printf("%d, ", arr1[i][j]);
        }
        printf("\n");
    }

    // arr2
    printf("\nArr2[%d][%d] = ", arr2Row, arr2Col);
    for (i = 0; i < arr2Row; i++)
    {
        printf("\n\t");
        for (j = 0; j < arr2Col; j++)
        {
            printf("%d, ", arr2[i][j]);
        }
        printf("\n");
    }

    // multiplication

    for (i = 0; i < arr1Row; i++)
    {
        for (j = 0; j < arr2Col; j++)
        {
            for (k = 0; k < arr1Col; k++)
            {
                sum += arr1[i][k] * arr2[k][j];
            }
            multiArr[i][j] = sum;
            sum = 0;
        }
    }

    // multiplication output

    printf("\nMULTIPLICATION RESULT\n");
    for (i = 0; i < arr1Row; i++)
    {
        for (j = 0; j < arr2Col; j++)
        {
            printf("%d ", multiArr[i][j]);
        }
        printf("\n");
    }
}