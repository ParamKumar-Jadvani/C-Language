#include <stdio.h>

int getInt()
{
	int n;
	scanf("%d", &n);
	return n;
}

int getCube(int n)
{
	return n * n * n;
}

void printNum()
{
	printf("Enter Any Number : ");
	int n = getInt();

	int q = getCube(n);

	printf("%d Number qube is => %d\n", n, q);
}

int main()
{
	printNum();
	return 0;
}
