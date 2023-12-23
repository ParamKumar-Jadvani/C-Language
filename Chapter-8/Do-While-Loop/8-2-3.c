#include <stdio.h>

int main()
{
	int i = 0, a = 0, b = 1, c = 0, n;

	printf("Ente the Any number :");
	scanf("%d", &n);

	do
	{
		printf("%d ", a);
		c = a + b;
		a = b;
		b = c;
		i++;

	} while (i <= n);
}
