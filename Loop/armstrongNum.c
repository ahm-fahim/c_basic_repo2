/*
    153 = 1*1*1 + 5*5*5 + 3*3*3
        = 153

   
*/

#include <stdio.h>

int main()
{
    int sum = 0, num, temp, reminder;

    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        reminder = temp % 10;
        sum = sum + reminder * reminder * reminder;
        temp = temp / 10;
    }
    if (num == sum)
        printf("Armstrong value: %d\n", sum);
    else
        printf("Not Armstrong value: %d\n",sum);

    return 0;
}