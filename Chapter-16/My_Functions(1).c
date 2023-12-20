#include <stdio.h>
#include <conio.h>
#include "D:\4432\C-language\Chapter-16\My_Functions.c"
#define P printf
#define S scanf
int i, j;

void array();
void arraySorting();

void array()
{
    int n = getArraySize();
    int a[n];

    arrayInput(a, n);
    arrayOutput(a, n);

    getch();
    system("cls");

    arraySorting(a, n);
    arrayOutput(a, n);
}

void arraySorting(int a[], int n)
{
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[i] > a[j])
            {
                a[i] = a[i] * a[j];
                a[j] = a[i] / a[j];
                a[i] = a[i] / a[j];
            }
        }
    }
}


