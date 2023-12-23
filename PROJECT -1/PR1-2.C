#include <stdio.h>
#include <conio.h>
main()
{
	int salary;
	float hra, da, ta, gs = 0;
	clrscr();

	printf("Enter Your Salary : ");
	scanf("%d", &salary);

	hra = (float)salary * 0.10;
	printf("\nYour HRA is : %.2f ", hra);

	da = (float)salary * 0.05;
	printf("\nYour DA is : %.2f ", da);

	ta = (float)salary * 0.08;
	printf("\nYour TA is : %.2f ", ta);

	gs += salary + hra + da + ta;
	printf("\n\n\tYour gross Salry is : %.2f", gs);
	getch();
}