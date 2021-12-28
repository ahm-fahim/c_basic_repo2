#include <stdio.h>

int main()
{
    int i;

    // for (i = 0; i <= 10; i++)
    // { // variable initialization ; condition ; update Counter
    //     printf("%d\n", i);
    // }

    // printf("while\n\n");
    // while(i<=10){ // condition initialization
    //     printf("%d\n", i++);
    // }

    printf("do while\n\n");

    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= 10);

    return 0;
}