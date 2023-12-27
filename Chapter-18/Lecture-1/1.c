#include <stdio.h>

void arrayQube(int *n, int *ptr)
{
	int i;
	for (i = 0; i < *n; i++)
	{
		printf("%d => %d\n", *(ptr + i), (*(ptr + i)) * (*(ptr + i)) * (*(ptr + i)));
	}
}

int getInt()
{
	int n;
	scanf("%d", &n);
	return n;
}

int main()
{
	printf("Enter size : ");
	int n = getInt();

	int a[n];
	int i;

	printf("\n");
	for (i = 0; i < n; i++)
	{
		printf("Enter a[%d] : ", i + 1);
		a[i] = getInt();
	}
	printf("\n");

	for (i = 0; i < n; i++)
		printf("Enter a[%d] : %d\n", i + 1, a[i]);

	arrayQube(&n, &a);

	return 0;
}