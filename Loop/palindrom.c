#include <stdio.h>

int main()
{
    int sum = 0, num, reminder, temp;

    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        reminder = temp % 10;
        sum = (sum * 10) + reminder;
        temp = temp / 10;
    }

    if (num == sum)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }

    return 0;
}
