#include <stdio.h>

int main()
{
	int r, c;
	printf("Enter the Row :");
	scanf("%d", &r);

	printf("Enter the Column :");
	scanf("%d", &c);

	int a[r][c];
	int i, j;

	printf("\nEnter the Array Elements :\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("a[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\n\t---Matrix---\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("\n\n\n---Transpose Matrix---\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", a[j][i]);
		}
		printf("\n");
	}

	return 0;
}
