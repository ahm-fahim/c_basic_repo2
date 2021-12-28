/*
    1 0 1 0 1 
    1 0 1 0 
    1 0 1 
    1 0 
    1
*/
#include <stdio.h>

int main()
{
    int row, col, n;

    scanf("%d", &n);

    for (row = n; row >= 1; row--)
    {
        for (col = 1; col <= row; col++)
        {
            printf("%d ", col % 2);
        }
        printf("\n");
    }
    return 0;
}