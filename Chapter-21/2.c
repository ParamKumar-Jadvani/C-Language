#include <stdio.h>

void user();

int main()
{
    user();
    return 0;
}

void user()
{
    FILE *f = fopen("user.txt", "a");

    int i = 0;

    if (f != NULL)
        printf("File is Open\n\n");
    else
        printf("File is Not Open\n\n");

    for (i = 0; i <= 50; i++)
    {
        if ((i % 3 == 0) && (i % 5 == 0))
            fprintf(f, "%d ", i);
    }

    fclose(f);
}