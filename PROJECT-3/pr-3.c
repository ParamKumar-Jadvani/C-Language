#include <stdio.h>

int main()
{
	int n, fd, ld;

	printf("Enter the any Number :");
	scanf("%d", &n);

	ld = n % 10;

	while (n >= 9)
	{
		n /= 10;
		fd = n;
	}

	printf("Your First and Last Digit Sum is : %d \n", fd + ld);

	return 0;
}
