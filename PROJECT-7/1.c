#include <stdio.h>
#include <conio.h>
#define P printf
#define s scanf

int getInt()
{
	int n;
	scanf("%d", &n);
	return n;
}

int getSum(int a, int b)
{
	return a + b;
}

int getSub(int a, int b)
{
	return a - b;
}

int getMultiplication(int a, int b)
{
	return a * b;
}

int getDivision(int a, int b)
{
	return a / b;
}
int getModulus(int a, int b)
{
	return a % b;
}

void calc()
{
	int choice;
	do
	{
		system("cls");
		P("Enter 1st number : ");
		int a = getInt();

		P("Enter 2nd Number : ");
		int b = getInt();

		P("\n1) for '+'\n\n2) for '-'\n3) for '*'\n4) for '/'\n5) for '%%'\n0) for exit \n");
		P("Enter Your choice : ");
		choice = getInt();

		switch (choice)
		{
		case 0:
			P("Thank you Foe using Our Calculator\n");
			getch();
			break;
		case 1:
			P("%d + %d = %d \n", a, b, getSum(a, b));
			getch();
			break;
		case 2:
			P("%d - %d = %d \n", a, b, getSub(a, b));
			getch();
			break;
		case 3:
			P("%d * %d = %d \n", a, b, getMultiplication(a, b));
			getch();
			break;
		case 4:
			P("%d / %d = %d \n", a, b, getDivision(a, b));
			getch();
			break;
		case 5:
			P("%d %% %d = %d \n", a, b, getModulus(a, b));
			getch();
			break;

		default:
			P("Your Number is Invalid Please Re-enter Your Choice\n");
			getch();
			break;
		}
	} while (choice != 0);
}

int main()
{
	calc();
	return 0;
}
