#include <stdio.h>
#include <conio.h>
#define P printf
#define S scanf

int main()
{
	float p, r, t;
	clrscr();
	P("Enter the Value of Money : ");
	S("%f", &p);
	P("Enter the Rate of Interst : ");
	S("%f", &r);
	P("Enter the Time Of Taken Money : ");
	S("%f", &t);

	P("Your Simple Interst is : %.2f", (p * r * t) / 100);
	getch();
	return 0;
}