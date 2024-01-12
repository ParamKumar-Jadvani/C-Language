#include<stdio.h>
#define P printf
#define S scanf
int i,j;

void user();

int main()
{
   user();
   return 0;
}

void user()
{
   int n=1;
   
   for(i=0; i<5; i++)
   {
      for(j=0; j<i; j++)
      {
         P("\t%d",n++);
      }
      P("\n");
   }
}
