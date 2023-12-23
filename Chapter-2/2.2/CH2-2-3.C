#include <stdio.h>
#include <conio.h>
#define P printf
#define S scanf

int main()
{
	float b, h;
	clrscr();
	P("Enter the Any Base : ");
	S("%f", &b);
	P("Enter the Any Height : ");
	S("%f", &h);

	P("Your Area of Traiangle is : %.2f", 0.5 * h * b);
	getch();
	return 0;
}