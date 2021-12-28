/*

*/
#include <stdio.h>

int main()
{
    int number,temp , reminder, sum= 0;

    scanf("%d", &number);

    temp = number;

    while(temp != 0){
        reminder = temp % 10;
        sum = sum + reminder;
        temp = temp / 10;
    }
    printf("Sum of digits: %d\n",sum);
}