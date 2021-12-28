/*
    data_taype array_name [row_size][col_size]
*/

#include <stdio.h>

int main()
{
    int my2Darray[4][4] = {{1, 2, 3, 4},
                           {5, 6, 7, 8},
                           {9, 10, 11, 12},
                           {12, 13, 14, 23}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf(" %d ", my2Darray[i][j]);
        }
        printf("\n");
    }

    return 0;
}