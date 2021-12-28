#include <stdio.h>

int sum(int a, int b, int c)
{
    return a + b + c;
}

void sub(int a, int b, int c){
    printf("Sub: %d\n",a-b-c);
}
int main()
{
    printf("Sum: %d\n", sum(10, 20, 40));

    sub(400,20,10);

    return 0;
}
