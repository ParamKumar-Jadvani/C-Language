#include <stdio.h>

int main()
{
	int n1, n2, n3;
	printf("Enter the Array A Size : ");
	scanf("%d", &n1);

	printf("Enetr the Array B Size : ");
	scanf("%d", &n2);

	n3 = n1 + n2;

	int a[n1], b[n2], c[n3], i;

	// Array Input
	printf("\nEnter the Array A Elements : \n");
	for (i = 0; i < n1; i++)
	{
		printf("a[%d] : ", i);
		scanf("%d", &a[i]);
	}

	printf("\n\nEnter the Array b Elements : \n");
	for (i = 0; i < n2; i++)
	{
		printf("b[%d] : ", i);
		scanf("%d", &b[i]);
	}

	// Merge
	for (i = 0; i < n1; i++)
	{
		c[i] = a[i];
	}
	for (i = 0; i <= n2; i++)
	{
		c[i + n1] = b[i];
	}

	// Array Output
	printf("\n\nArray A Elements : \n");
	for (i = 0; i < n1; i++)
	{
		printf("%d ", a[i]);
	}

	printf("\nArray b Elements : \n");
	for (i = 0; i < n2; i++)
	{
		printf("%d ", b[i]);
	}

	printf("\nArray c Elements : \n");
	for (i = 0; i < n3; i++)
	{
		printf("%d ", c[i]);
	}

	return 0;
}
