#include <stdio.h>

int main()
{
	int r, c;
	printf("Enter the Row :");
	scanf("%d", &r);

	printf("Enter the Column :");
	scanf("%d", &c);

	int a[r][c];
	int i, j, max = 0;

	printf("Enter the Array Elements : \n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("A[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("Array Elements are :\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (a[i][j] > max)
				max = a[i][j];
		}
	}

	printf("\n\nMaximum Number in the Array is : %d \n", max);

	return 0;
}
