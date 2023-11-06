#include<stdio.h>
#include<conio.h>
#define P printf
#define S scanf
#define PI 3.14


int main()
{
	float r;
	clrscr();
	P("Enter the Any Radius : ");
	S("%f",&r);

	P("Your Area of Circle is : %.2f",PI*r*r);
	return 0;
	getch();
}