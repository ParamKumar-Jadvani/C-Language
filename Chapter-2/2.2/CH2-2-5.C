#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
#define PI 3.14


int main()
{
	float r;
	clrscr();
	P("Enter the Any value : ");
	S("%f",&r);

	P("Your Perimeter of Circle is :  %.2f",2*PI*r);
	getch();
	return 0;
}