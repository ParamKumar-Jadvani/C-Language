#include <stdio.h>
#include <string.h>

int getInt()
{
    int n;
    scanf("%d", &n);
    return n;
}

int main()
{
    char name[10], name1[20];
    int n1, Marks1;
    FILE *fp, *fp1;

    fp = fopen("1.txt", "w");
    fp1 = fopen("2.txt", "w");

    printf("Enter N : ");
    int n = getInt();

    fflush(stdin);
    printf("Enter Name : ");
    gets(name);

    printf("Enter Marks in integer : ");
    int Marks = getInt();

    if (fp != NULL && fp1 != NULL)
        printf("File will be Open\n\n");
    else
        printf("File is Not Open\n\n");

    fprintf(fp, "%d %s %d\n", n, name, Marks);

    fclose(fp);

    fp = fopen("1.txt", "r");

    fscanf(fp, "%d", &n1);
    fscanf(fp, "%s", &name1);
    fscanf(fp, "%d", &Marks1);

    fprintf(fp1, "%d %s %d\n", n1, name1, Marks1);

    fclose(fp);
    fclose(fp1);
}