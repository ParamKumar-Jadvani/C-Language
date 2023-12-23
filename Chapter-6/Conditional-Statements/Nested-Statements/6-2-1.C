#include <stdio.h>
#include <conio.h>
main()
{
	int a, b, c;
	clrscr();
	printf("Enter a :");
	scanf("%d", &a);
	printf("Enter b :");
	scanf("%d", &b);
	printf("Enter c :");
	scanf("%d", &c);
	if (a == b && b == c)
	{
		printf("Your All Number have Same Value!!");
	}
	else if (a == b)
	{
		printf("Your A and B have Same Value");
	}
	else if (b == c)
	{
		printf("Your B and c have same Value");
	}
	else if (a < b)
	{
		if (a < c)
		{
			printf("A is Small");
		}
		else
		{
			printf("C is Small");
		}
	}
	else
	{
		if (b < c)
		{
			printf("B is Small");
		}
		else
		{
			printf("C is Small ");
		}
	}
	getch();
}