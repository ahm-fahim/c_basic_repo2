// arr[]={.....}

#include <stdio.h>

int main()
{
    int myArray[100];
    int sum = 0, n;

    printf("How many number you wanna input: ");
    scanf("%d", &n);
      
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &myArray[i]);
    }

    for (int i = 0; i < n; i++)
    {
        sum += myArray[i];
    }
    printf("sum = %d\n", sum);

    return 0;
}