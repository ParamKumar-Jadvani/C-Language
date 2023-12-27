#include <stdio.h>

int getInt()
{
	int n;
	scanf("%d", &n);
	return n;
}

int main()
{
	printf("Enter Size : ");
	int n = getInt();

	int a[n], i, j = 0;

	int *ptr[n];
	ptr[0] = &a;

	int **ptr1[n];
	ptr1[0] = &ptr;

	int ***ptr2[n];
	ptr2[0] = &ptr1;

	for (i = 0; i < n; i++)
		ptr[i] = &a[i];

	for (i = 0; i < n; i++)
		ptr1[i] = &ptr[i];

	for (i = 0; i <= n; i++)
		ptr2[i] = &ptr1[i];

	for (i = 0; i < n; i++)
	{
		printf("Enter a[%d] : ", i + 1);
		***ptr2[i] = getInt();
	}

	printf("\n\n");
	for (i = 0; i < n; i++)
		printf("Enter a[%d] : %d\n", i + 1, ***ptr2[i]);

	printf("\n\n");

	printf("\t--Reverse_Arary---\n");

	for (i = 0; i < n; i++)
		printf("A[%d] : %d\n", i + 1, ***ptr2[n - i - 1]);

	return n;
}