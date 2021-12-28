/*
    num = 123   |formula: r = temp % 10
    sum = 0     |      sum  = sum * 10 + r
    temp = num  |     temp  = temp / 10

    while(temp != 0)
    {
        step-1:
                r = 3                   10|123|12 (temp)
                sum = (0*10)+3 = 3         10
                temp = 12                 ------
                                            23
                                            20
                                            ------
                                            3 (r)

        step-2:
                r = 2                       10|12|1 (temp)
                sum = (3 * 10) + 2 = 32        10
                temp = 1                     -------
                                                2 (r)

        step-3:
                r = 1                       10|1|0 (temp)
                sum = 32 * 10 + 1 = 321        0
                temp = 0                      ----
                                            1    (r)
    }
*/

#include <stdio.h>

int main()
{
    int num, sum = 0, temp, reminder;

    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        reminder = temp % 10;
        sum = (sum * 10) + reminder;
        temp = temp / 10;
    }

    printf("Reverse:%d", sum);

    return 0;
}
