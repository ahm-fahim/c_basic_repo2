#include <stdio.h>
void swapNum(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}
int main()
{
    int x = 50, y = 30;
    swapNum(&x, &y);
    printf("x = %d, y = %d\n\n", x, y); 
    
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr, i;

    ptr = &arr[0];

    for(i = 0; i < 5; i++){
        printf("%d\t",*ptr);
        ptr++;
    }
    return 0;
}