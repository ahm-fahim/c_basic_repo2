/*
    num1 60 = 2  * 2 * 3 * 5
    num2 30 = 2 * 3 * 5

    GCD = 2 * 3 * 5 = 30

    LCM = (num1 * num2) / GCD
        = (60 * 30) / 30
        = 60
    ----------------------------------
    n1 = num1 && n2 = num2

    n1 %    n2      = reminder
    n2 % reminder   = reminder
    n2 % reminder   = reminder
    ....
    ...
    ..
    .
    while n2 != 0

    ----------------------------------------------------------------
    Algorithm

    1. start
    2. input num1, num2
    3. set n1 = num1
           n2 = num2
    4. while(n2 != 0)
        {
            reminder = n1 % n2
            n1 = n2
            n2 = reminder
        }
    5. gcd = n1
       lcm = (num1 * num2) / gcd
    6. print gcd & lcm
    7. end


*/

#include <stdio.h>

int main()
{
    int num1, num2, n1, n2, reminder, gcd, lcm;

    scanf("%d %d", &num1, &num2);

    n1 = num1;
    n2 = num2;

    while (n2 != 0)
    {
        reminder = n1 % n2;
        n1 = n2;
        n2 = reminder;
    }

    gcd = n1;

    lcm = (num1 * num2) / gcd;

    printf("GCD = %d\n LCM = %d\n", gcd, lcm);

    return 0;
}