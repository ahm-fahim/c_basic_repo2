#include <stdio.h>

int main()
{
    FILE *file;
    char ch1[20], ch2[20];

    file = fopen("test2.txt", "r");

    if (file == NULL)
    {
        printf("Doesn't exit");
    }
    else
    {
        printf("Open successfully!\n");
        fscanf(file, "%s %s", &ch1, &ch2);
        printf("%s %s\n", ch1, ch2);
        fclose(file);
    }
}