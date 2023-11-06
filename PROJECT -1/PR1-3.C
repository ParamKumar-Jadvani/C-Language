#include<stdio.h>
#include<conio.h>
main()
{
	float a1,a2;
	clrscr();
	printf("Enter the Angle 1 of Triangle :");
	scanf("%f",&a1);
	printf("Enter the Angle 2 of Triangle :");
	scanf("%f",&a2);
	printf("\n\n\tYour 3rd Angle is: %.2f ",180-(a1+a2));

	getch();
}