#include <stdio.h>

enum days_of_week
{
    sat,
    sun,
    mon,
    tue,
    wed,
    thu,
    fri
};

int main()
{
    enum days_of_week day1;

    day1 = wed;

    printf("Day1: %d\n", day1);
}