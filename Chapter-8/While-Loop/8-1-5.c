#include <stdio.h>

int main()
{
	int s, e;

	printf("Emter the Any Year :");
	scanf("%d", &s);

	printf("Emter the Any Year :");
	scanf("%d", &e);

	while (s <= e)
	{
		if (s % 4 == 0)
		{
			printf("%d ", s);
		}
		s++;
	}
	return 0;
}
