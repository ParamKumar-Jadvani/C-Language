#include<stdio.h>

int main()
{
	int n,count=0;
	
	printf("Enter the any Number :");
	scanf("%d",&n);
	
	do
	{
		n /= 10;
		count++;
	}while(n != 0);
	
	printf("Your total digit is : %d \n",count);
	
	return 0;
}
