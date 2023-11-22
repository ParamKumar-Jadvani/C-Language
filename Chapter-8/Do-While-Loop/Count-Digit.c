#include<stdio.h>

int main()
{
	int n,count=0;
	
	printf("Enter the Any number :");
	scanf("%d",&n);
	
	do
	{
		n /= 10;
		count++;
	} while(n != 0);
	
	printf("Your Number Digit is : %d \n",count);
	
	return 0;
}
