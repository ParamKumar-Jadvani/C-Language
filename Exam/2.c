#include<stdio.h>
#define P printf
#define S scanf
int i;

int getInt();
void user();
void fibonacci();

int main()
{
   user();
   return 0;
}

void user()
{
   P("Enter Number : ");
   int n = getInt();

   fibonacci(n,0,0,1); 
}

void fibonacci(int n,  int fib, int temp, int temp2)
{
   // int fib=0,temp2=1,i,temp=0;

	if(n!=0)
   {
      printf("%d   ",fib);
		temp = fib+temp2;
		fib = temp2;
		temp2 = temp;
      n--;
      fibonacci(n, fib, temp, temp2);
   }
}

int getInt()
{
   int n;
   scanf("%d", &n);
   return n;
}
