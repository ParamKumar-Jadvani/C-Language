#include <stdio.h>

int main()
{
	int fact = 1, n;

	printf("Enter the Any Number :");
	scanf("%d", &n);

	for (; n > 0; n--)
	{
		fact *= n;
		printf("Factorial Number : %d \n", fact);
	}

	return 0;
}
