#include<stdio.h>
#define P printf
#define S scanf
int i,j;


int getInt();
int getArraySize();
void user();
void arrayInput2D();
void arrayOutput2D();
void diagonal();
void AntiDiagonal();

int main()
{
   user();
   return 0;
}

void user()
{
   int r = getArraySize();
   int c = getArraySize();

   int a[r][c];

   arrayInput2D(r,c,a);
   arrayOutput2D(r,c,a);

   diagonal(r,c,a);
   AntiDiagonal(r,c,a);

}

int getArraySize()
{
   P("Enter Array Length: ");
   int n = getInt();

   return n;
}

void arrayInput2D(int r, int c, int a[r][c])
{
   for(i=0; i<r ; i++)
   {
      for(j=0; j<c ; j++)
      {
         P("Enter Array [%d][%d] Elements :  ",i,j);
         a[i][j] = getInt();
      }
   }
}

void arrayOutput2D(int r, int c, int a[r][c])
{
   P("\n\t--- Array Elements ---\n\n");

   for(i=0; i<r ; i++)
   {
      for(j=0; j<c ; j++)
      {
         P("\t%d",a[i][j]);
      }
      P("\n");
   }
}

void diagonal(int r, int c, int a[r][c])
{
   P("\n\t--- Diagonal Elements ---\n\n");

   for(i=0; i<r ; i++)
   {
      for(j=0; j<c ; j++)
      {
         if(i==j)
            P("\t%d",a[i][j]);
         else
            P("\t");
      }
      P("\n");
   }
}


void AntiDiagonal(int r, int c, int a[r][c])
{
   P("\n\t--- Anti - Diagonal Elements ---\n\n");

   for(i=0; i<r ; i++)
   {
      for(j=0; j<c ; j++)
      {
         if(i+j == r-1)
            P("\t%d",a[i][j]);
         else
            P("\t");
      }
      P("\n");
   }
}

int getInt()
{
   int n;
   scanf("%d", &n);
   return n;
}
