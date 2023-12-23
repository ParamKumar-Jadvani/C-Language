#include <stdio.h>

int getInt()
{
	int n;
	scanf("%d", &n);
	return n;
}

int main()
{
	int r, c;
	printf("Enter the Row :");
	r = getInt();

	printf("Enter the Column :");
	c = getInt();

	int a[r][c];
	int i, j;

	printf("Enter the An Array :\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("A[%d][%d] : ", i, j);
			a[i][j] = getInt();
		}
	}

	printf("\n\n\t---An Array---\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
			printf("%d ", a[i][j]);

		printf("\n");
	}

	printf("\n\n\t---outer Elements---\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (i == 0 || j == 0 || i == r - 1 || j == c - 1)
				printf("%d ", a[i][j]);

			else
				printf("  ");
		}
		printf("\n");
	}

	return 0;
}