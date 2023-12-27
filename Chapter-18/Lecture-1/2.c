#include <stdio.h>

int getInt()
{
	int n;
	scanf("%d", &n);
	return n;
}

void swap(int *ptr, int *ptr1)
{
	*ptr = *ptr + *ptr1;
	*ptr1 = *ptr - *ptr1;
	*ptr = *ptr - *ptr1;
}

int main()
{
	printf("Enter x : ");
	int x = getInt();

	printf("Enter Y : ");
	int y = getInt();

	printf("x\t=>%d\n", x);
	printf("Y\t=>%d\n", y);

	swap(&x, &y);
	printf("\n\nx\t=>%d\n", x);
	printf("Y\t=>%d\n", y);

	return 0;
}