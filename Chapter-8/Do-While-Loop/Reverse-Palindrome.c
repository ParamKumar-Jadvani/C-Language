#include<stdio.h>

int main()
{
	int n,rem,rev=0,pali;
	
	printf("Enter the Any Number :");
	scanf("%d",&n);
	
	pali = n;
	
	do
	{
		rem = n%10;
		rev = rev * 10 + rem;
		n /= 10;
	} while(n != 0);
	
	if(pali == rev)
	{
		printf("Reverse Number : %d \n",rev);
		printf("Your Number is Palindrome Number \n");
	}
	else
	{
		printf("Reverse Number : %d \n",rev);
		printf("Your Number is Not Palindrome Number \n");
	}
	
	return 0;
}
