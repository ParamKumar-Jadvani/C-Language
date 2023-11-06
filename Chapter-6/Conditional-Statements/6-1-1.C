#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);

	if(a>b)
	{
		printf("Your %d Value is Less Than %d\n",a,b);
	}
	else
	{
		printf("Your %d Value is Less Than %d\n",b,a);
	}
	getch();
}