#include <stdio.h>
#include "E:\4432\C-language\Chapter-16\My_Functions\My_Functions.c"

// int arraySum(int n, int a[])
//{
//	int i, sum=0;
//
//	for(i=0; i<n; i++)
//	{
//		sum += a[i];
//	}
//	return sum;
// }

int main()
{
	int n = getArrayLength();

	int a[n];

	arrayInput(a, n);
	arrayOutput(a, n);

	int sum = arrayAddition(a, n);

	printf("Sum of All Elements is : %d\n", sum);

	return 0;
}