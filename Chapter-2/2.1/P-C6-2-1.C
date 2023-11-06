#include<stdio.h>
#include<conio.h>

int main()
{
	int a=12,b=6;
	clrscr();
	printf("Sum of %d & %d \t\t\t: %d\n",a,b,a+b);
	printf("Subtarction of %d & %d \t\t: %d\n",a,b,a-b);
	printf("Multiplication of %d & %d \t: %d\n",a,b,a*b);
	printf("Division of %d & %d \t\t: %d\n",a,b,a/b);
	printf("Modulus of %d & %d \t\t: %d\n",a,b,a%b);
	getch();
	return 0;
}