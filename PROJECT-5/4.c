#include <stdio.h>

int main()
{
	int r, c;
	printf("Enter the Row : ");
	scanf("%d", &r);

	printf("Enter the column :");
	scanf("%d", &c);

	int a[r][c];
	int i, j;
	int r1, c1, sum_r = 0, sum_c = 0;

	printf("Enter the Array Elements :");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("A[%d][%d] : ", i, j);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\n\n\t---Array Elements---\n");
	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("\nEnter the Row Number :");
	scanf("%d", &r1);
	printf("Row Elements are : ");

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (i == r1)
			{
				printf("%d ", a[i][j]);
				sum_r += a[i][j];
			}
		}
	}

	printf("\nRow Elements Sum is : %d\n", sum_r);

	printf("\nEnter the Column number : ");
	scanf("%d", &c1);
	printf("Column Elements are : ");

	for (i = 0; i < r; i++)
	{
		for (j = 0; j < c; j++)
		{
			if (j == c1)
			{
				printf("%d ", a[i][j]);
				sum_c += a[i][j];
			}
		}
	}

	printf("\nColumn Elements Sum is : %d\n", sum_c);

	return 0;
}
