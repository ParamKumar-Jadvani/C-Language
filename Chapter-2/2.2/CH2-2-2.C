#include <stdio.h>
#include <conio.h>
#define P printf
#define S scanf

int main()
{
	float l, h;
	clrscr();
	P("Enter the Any Length : ");
	S("%f", &l);
	P("Enter the Any Height : ");
	S("%f", &h);

	P("Your Area of Ractangle is : %.2f", l * h);
	getch();
	return 0;
}