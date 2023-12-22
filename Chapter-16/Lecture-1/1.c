#include<stdio.h>

int getInt()
{
	int n;
	scanf("%d",&n);
	return n;
}
void check(int n)
{
	if( (n%3 == 0) && (n%5 == 0) )
		printf("This %d Number is Divisible by both 3 & 5\n",n);
	else
		printf("This %d Number is Not Divisivle by both 3 & 5\n",n);
}

void printNum()
{
	printf("Enter Any Nuumber : ");
	int n = getInt();
	
	check(n);
}

int main()
{
	printNum();
	return 0;
}
