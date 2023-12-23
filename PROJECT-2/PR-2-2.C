#include <stdio.h>
#include <conio.h>
main()
{
	float unit, bill;
	clrscr();
	printf("Enter the Electricity Bill :");
	scanf("%f", &unit);

	if (unit < 51)
	{
		bill = unit * 0.50;
	}
	else if (unit > 50 && unit <= 150)
	{
		bill = ((unit - 100) * 0.75) + 25;
	}
	else if (unit > 150 && unit <= 250)
	{
		bill = ((unit - 150) * 1.20) + 100;
	}
	else
	{
		bill = ((unit - 250) * 1.50) + 100 + 120;
	}

	bill += bill * 0.20;

	printf("YOPur Electricity Bill is : %.2f", bill);
	getch();
}