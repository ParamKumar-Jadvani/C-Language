#include<stdio.h>
#define P printf
#define S scanf
int i,j;

int getInt();
int getArraySize();
void arrayInput();
void arrayOutput();
void swap();
void user();

int main()
{
   user();
   return 0;
}

void user()
{
   int n = getArraySize();

   int a[n], b[n];

   P("\n\t--- Enter Array A Element---\n");
   arrayInput(n, a);

   P("\n\t--- Enter Array B Element---\n");
   arrayInput(n, b);

   P("\n\t--- Array A Element---\n");
   arrayOutput(n, a);

   P("\n\t--- Array B Element---\n");
   arrayOutput(n, b);

   swap(n, a, b);


   P("\n\n\n\t---- Swaping Arrays ---\n\n");
   P("\n\t--- Array A Element---\n");
   arrayOutput(n, a);

   P("\n\t--- Array B Element---\n");
   arrayOutput(n, b);
}

int getArraySize()
{
   P("Enter Array Length: ");
   int n = getInt();

   return n;
}

void arrayInput(int n , int a[])
{
   for(i=0; i<n ; i++)
   {
      P("Enter [%d] : ",i);
      a[i] = getInt();
   }
}

void arrayOutput(int n , int a[])
{

   for(i=0; i<n ; i++)
   {
      P("\t[%d] :\t %d\n",i,a[i]);
   }
}

void swap(int n, int a[], int b[])
{
   int temp;
   for(i=0; i<n; i++)
   {
      temp = a[i];
      a[i] = b[i];
      b[i] = temp;
   }
}

int getInt()
{
   int n;
   scanf("%d", &n);
   return n;
}