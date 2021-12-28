#include <stdio.h>

int main()
{
    int arr1[100][100], arr2[100][100], sumOfArray[100][100], row, col, i, j;

    // arr1
    printf("How many rows and column you want for arr1: ");
    scanf("%d %d", &row, &col);

    // input arr1 value
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("arr1 [%d][%d] = ", i, j);
            scanf("%d", &arr1[i][j]);
        }
    }
    // print arr1 value
    printf("\nArr1 = { ");

    for (i = 0; i < row; i++)
    {
        printf("\n\t{ ");
        for (j = 0; j < col; j++)
        {
            printf("%d, ", arr1[i][j]);
        }
        printf(" },");
    }
    printf("\n\t}\n");

    //----------------------------------------
    //                  arr2
    //---------------------------------
    printf("How many rows and column you want for arr2: ");
    scanf("%d %d", &row, &col);

    // input arr2 value
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("arr2 [%d][%d] = ", i, j);
            scanf("%d", &arr2[i][j]);
        }
    }
    // print arr2 value
    printf("\nArr2 = { ");

    for (i = 0; i < row; i++)
    {
        printf("\n\t{ ");
        for (j = 0; j < col; j++)
        {
            printf("%d, ", arr2[i][j]);
        }
        printf(" },");
    }
    printf("\n\t}\n");

    //----------------------------
    //        sum of array
    //---------------------------

    printf("Sum Of Array\n");
    printf("How many rows and columns value you wanna add in SumOfArray: ");
    scanf("%d %d", &row, &col);

    // addition

    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            sumOfArray[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    // sum of array output
    printf("\nsumOfArray[%d][%d] = { ", row, col);
    for (i = 0; i < row; i++)
    {
        printf("\n\t{");
        for (j = 0; j < col; j++)
        {
            printf("%d, ", sumOfArray[i][j]);
        }
        printf("},");
    }
    printf("\n\t}\n");

    return 0;
}