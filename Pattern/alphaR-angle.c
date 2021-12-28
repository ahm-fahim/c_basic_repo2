#include <stdio.h>

int main()
{
    char row, col, n;

    scanf("%c", &n);

    for (row = 'A'; row <= n; row++)
    {
        for (col = 'A'; col <= row; col++)
        {
            printf("%c ", col);
        }
        printf("\n");
    }

    return 0;
}