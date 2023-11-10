#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("Enter the Any Number :");
	scanf("%d",&n);

	(n%2 == 0)
		? printf("%d Number is Even ",n)
		: printf("%d Numebr is odd ",n);
	getch();
}