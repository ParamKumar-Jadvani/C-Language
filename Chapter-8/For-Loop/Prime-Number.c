#include<stdio.h>

int main()
{
	int i,n,count=0;
	
	printf("Enter the Any Number : ");
	scanf("%d",&n);
	
	for(i=1; i<=n; i++)
	{
		if(n%i == 0)
		{
			count++;
		}
	}
	
	if(count <= 2)
	{
		printf("Your Number is Prime number\n");
	}
	else
	{
		printf("Your Number is Not Prime Number\n");
	}
	
	return 0;
}
