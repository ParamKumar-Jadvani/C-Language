#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define P printf
#define S scanf
int i, j;

int getInt();
int getSum();
int getFact();
void getFibonacci();
int getArrayLength();
void arrayInput();
void arrayOutput();
void arraySorting();
int arrayAddition();
void array();
void array_2D_Input();
void array_2D_Output();
void array_2D_Diagonal();
void array_2D_Anti_Diagonal();
void array_2D_Border_Elements();
void array_2D_Inner_Elements();
void array_2D();
void pointerArrayInput();
void pointerArrayOutput();
void pointerArray();
void arrayNameOutput();

int getInt()
{
    int n;
    S("%d", &n);
    return n;
}

int getSum(int num)
{
    if (num > 1)
        return num + getSum(num - 1);
    else
        return 1;
}

int getFact(int num)
{
    if (num > 1)
        return num * getFact(num - 1);
    else
        return 1;
}

void getFibonacci(int num)
{
    int fib = 0, temp = 1, temp1 = 0;
    for (i = 0; i < num; i++)
    {
        P("%d ", fib);
        temp1 = fib + temp;
        fib = temp;
        temp = temp1;
    }
}

int getArrayLength()
{
    P("Enter Array Length : ");
    int n = getInt();
    return n;
}

void arrayNameOutput(char name[])
{
    P("\t---%s---\n", name);
}

void arrayInput(int a[], int n)
{
    P("\t---Enter Given Data---\n");
    for (i = 0; i < n; i++)
    {
        P("a[%d] : ", i);
        a[i] = getInt();
    }
}

void arrayOutput(int a[], int n)
{
    P("\t---Your Data---\n");
    for (i = 0; i < n; i++)
        P("a[%d] : %d\n", i, a[i]);
}

void array()
{
    int n = getArrayLength();
    int a[n];

    char name[20];

    fflush(stdin);
    P("Enter Array Name : ");
    gets(name);

    arrayInput(a, n);

    arrayNameOutput(name);

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

int arrayAddition(int a[], int n)
{
    int sum = 0;
    for (i = 0; i < n; i++)
        sum += a[i];
    return sum;
}

void array_2D_Input(int r, int c, int a[r][c])
{
    P("\t---Enter Given Data---\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            P("a[%d][%d] : ", i, j);
            a[i][j] = getInt();
        }
    }
}

void array_2D_Output(int r, int c, int a[r][c])
{
    P("\t---Your Data---\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            P("%d\t", a[i][j]);
        }
        P("\n");
    }
}

void array_2D()
{
    int r = getArrayLength();
    int c = getArrayLength();

    int a[r][c];

    array_2D_Input(r, c, a);
    array_2D_Output(r, c, a);
}

void array_2D_Diagonal(int r, int c, int a[r][c])
{
    P("\t---Diagonal Elements---\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j)
                P("%d\t", a[i][j]);
            else
                P("\t");
        }
        P("\n");
    }
}

void array_2D_Anti_Diagonal(int r, int c, int a[r][c])
{
    P("\t---Anti_Diagonal Elements---\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i + j == r - 1)
                P("%d\t", a[i][j]);
            else
                P("\t");
        }
        P("\n");
    }
}

void array_2D_Border_Elements(int r, int c, int a[r][c])
{
    P("\t---Border_Elemenrs_2D_Array---\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == 0 || j == 0 || i == r - 1 || j == c - 1)
                P("%d\t", a[i][j]);
            else
                P("\t");
        }
        P("\n");
    }
}

void array_2d_Inner_Elements(int r, int c, int a[r][c])
{
    P("\t---Inner_Elements_2D_Array\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == 0 || j == 0 || i == r - 1 || j == c - 1)
                P("\t");
            else
                P("%d\t", a[i][j]);
        }
        P("\n");
    }
}

/*void pointerArrayInput(int **n, int **ptr)
{
    for (i = 0; i < **n; i++)
    {
        P("Enter a[%d] : ", i);
        *(*ptr + i) = getInt();
    }
}

void pointerArrayOutput(int **n, int **ptr)
{
    for (i = 0; i < **n; i++)
    {
        P("a[%d]\t:%d\n", i, *(*ptr + i));
    }
}

void pointerArray(int *n, int *ptr)
{
    pointerArrayInput(&n, &ptr);
    pointerArrayOutput(&n, &ptr);
}*/

void pointerArray()
{
    int n = getArrayLength();
    int a[n];

    pointerArrayInput(&n, &a);
    pointerArrayOutput(&n, &a);
}

void pointerArrayInput(int *n, int *ptr)
{
    for (i = 0; i < *n; i++)
    {
        P("Enter a[%d] : ", i);
        *(ptr + i) = getInt();
    }
}

void pointerArrayOutput(int *n, int *ptr)
{
    for (i = 0; i < *n; i++)
    {
        P("a[%d]\t:%d\n", i, *(ptr + i));
    }
}