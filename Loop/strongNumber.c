#include <stdio.h>

int main()
{
    int sum = 0, num, temp, reminder, fact, i;

    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        reminder = temp % 10;

        fact = 1;
        for (i = 1; i <= reminder; i++)
        {
            fact = fact * i;
        }

        sum += fact;
        temp = temp / 10;
    }

    if (sum == num)
        printf("Strong number");
    else
        printf("Not Strong Number");

    return 0;
}