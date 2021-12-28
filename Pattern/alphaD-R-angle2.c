/*
    E E E E E 
    D D D D 
    C C C 
    B B 
    A 
*/

#include <stdio.h>

int main()
{
    char row, col, n;

    scanf("%c", &n);

    for (row = n; row >= 'A'; row--)
    {
        for (col = 'A'; col <= row; col++)
        {
            printf("%c ", row);
        }
        printf("\n");
    }
}