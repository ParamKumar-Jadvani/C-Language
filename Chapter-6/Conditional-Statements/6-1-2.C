#include<stdio.h>
#include<conio.h>
main()
{
	int n;
	clrscr();
	printf("Enter a :");
	scanf("%d",&n);

	if(n > 0)
	{
		printf("%d is Positive Number\n",n);
	}
	else if(n == 0)
	{
		printf("%d Number is Nutral Number\n",n);
	}
	else
	{
		printf("%d is Negative Number\n",n);
	}
	getch();
}