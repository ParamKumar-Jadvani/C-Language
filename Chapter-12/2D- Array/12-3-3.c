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
	int i, j, sum = 0;

	printf("\nEnter the An Array Elements :\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("A[%d][%d] : ", i, j);
			a[i][j] = getInt();
		}
	}

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (i == j)
				sum += a[i][j];
		}
	}

	printf("\n\n\t---An Array---\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("\nSum of Diagonal Elements is : %d\n", sum);

	return 0;
}
