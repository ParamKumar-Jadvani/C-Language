#include <stdio.h>

int main()
{
	int n, i = 1;

	printf("Enter the Any Number :");
	scanf("%d", &n);

	do
	{
		printf("%d ", i++);

	} while (i <= n);

	return 0;
}
