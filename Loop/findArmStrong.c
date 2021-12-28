#include <stdio.h>

int main()
{
    int sum = 0, initialNum, finalNum, temp, reminder, num;

    scanf("%d %d", &initialNum, &finalNum);

    for (num = initialNum; num <= finalNum; num++)
    {
        temp = num;

        while (temp != 0)
        {
            reminder = temp % 10;
            sum = sum + reminder * reminder * reminder;
            temp = temp / 10;
        }
        if (sum == num)
        {
            printf("%d\t", num);
        }
        sum = 0;
    }

    return 0;
}