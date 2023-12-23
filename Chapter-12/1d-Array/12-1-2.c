#include <stdio.h>

int main()
{
	int n;
	float avg = 0;

	printf("Enetr the N :");
	scanf("%d", &n);

	int a[n], i;
	for (i = 0; i < n; i++)
	{
		printf("Enetr the A[%d] : ", i + 1);
		scanf("%d", &a[i]);
		avg += a[i];
	}

	printf("\nAvrage of an Array is : %.2f \n", avg / n);

	return 0;
}
