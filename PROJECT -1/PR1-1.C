#include<stdio.h>
#include<conio.h>
main()
{
	float c,f;
	clrscr();
	printf("Enter the Temprature in Celcius : ");
	scanf("%f",&c);

	f = c * (9 / 5) + 32;

	printf("Fahrenheit : %.2f",f);
	getch();
}