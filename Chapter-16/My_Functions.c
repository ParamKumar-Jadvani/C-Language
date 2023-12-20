#include <stdio.h>
#define P printf
#define S scanf
int i;


int getInt();
int getArraySize();
void arrayInput();
void arrayOutput();

int getInt()
{
    int n;
    S("%d", &n);
    return n;
}


int getArraySize()
{
    P("Enter Array Length : ");
    int n = getInt();
    return n;
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
    {
        P("a[%d] : %d\n", i, a[i]);
    }
}
