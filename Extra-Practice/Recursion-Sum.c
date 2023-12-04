#include<stdio.h>

int getInt()
{
	int n;
	scanf("%d",&n);
	return n;
}

int sum(int n)
{
	if(n>1)
		return n + sum(n-1);
	else
		return 1;
}

int main()
{
	int n;
	
	printf("Enetr the N:");
	n = getInt();
	
	printf("Your 1 to %d sum is : %d\n",n,sum(n));
	
	return 0;
}
