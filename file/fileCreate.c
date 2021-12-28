#include <stdio.h>
#include <string.h>

int main()
{
    FILE *file;
    char ch[40];
    // char name[100] = " About my hobby";
    // int length = strlen(name);
    //  int i;
    char name[100];

    file = fopen("test.txt", "r"); // r - read , w - write, a - append

    if (file == NULL)
    {
        printf("File doesn't exit");
    }
    else
    {
        printf("File is open.\n");
        // for(i = 0; i < length; i++){
        //     fputc(name[i],file);
        // }
        //---
        // printf("Enter anything : ");
        // gets(name);

        // // fputs(name, file);

        // fprintf(file, "YOUR TEXT = %s", name);

        //-----

        while (!feof(file))
        {
            // ch = fgetc(file);
            fgets(ch, 10, file);
            printf("%s", ch);
        }
        printf("\n\n");

        // printf("File was written successfully.\n");
        fclose(file);
    }
}