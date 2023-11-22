#include<stdio.h>

int main()
{
	int n,sum = 0;
	printf("Enter the Any number :");
	scanf("%d",&n);
	
	do
	{
		sum += n;
		--n;
	} while(n >= 0);
	
	printf("N Number of Sum is : %d \n",sum);
	
	return 0;
}
