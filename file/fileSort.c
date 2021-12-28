#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char name[30];
    int age, phone_no, num_of_relatives;

    file = fopen("test3.txt", "a");

    if (file == NULL)
    {
        printf("Doesn't exit!");
    }
    else
    {
        printf("How many realtives you wanna added this list? \n = ");
        scanf("%d", &num_of_relatives);

        for (int i = 0; i < num_of_relatives; i++)
        {
            printf("Name:");
            scanf("%s", &name);

            printf("Age: ");
            scanf("%d", &age);

            printf("Phone no: ");
            scanf("%d", &phone_no);

            fprintf(file, "\n%s\t\t%d\t\t%d\n", name, age, phone_no);
        }

        fclose(file);
    }
}