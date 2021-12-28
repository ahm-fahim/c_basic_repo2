/*
    a b c d e 
    a b c d 
    a b c 
    a b 
    a 
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
            printf("%c ", col + 96);
        }
        printf("\n");
    }
}