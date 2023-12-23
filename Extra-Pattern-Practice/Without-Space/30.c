#include <stdio.h>

int main()
{
	int i, j, k = 65;

	for (i = 1; i <= 5; i++)
	{
		for (j = 1; j <= i; j++, k++)
		{
			printf("%c ", k);
		}
		printf("\n");
	}

	return 0;
}
