#include<stdio.h>
#include<conio.h>
main()
{
	int a,b,c,min;
	clrscr();
	printf("Enter a :");
	scanf("%d",&a);
	printf("Enter b :");
	scanf("%d",&b);
	printf("Enter c :");
	scanf("%d",&c);

	min = (a<b)
		? (a<c)
			? a
			: c
		: (b<c)
			? b
			: c ;

	printf("Minimum Variable is : %d\n",min);
	getch();
}