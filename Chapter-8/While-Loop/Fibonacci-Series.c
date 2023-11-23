#include<stdio.h>

int main()
{
	int fib,n1=0,n2=1,n,i=0;
	
	printf("Enter the N :");
	scanf("%d",&n);
	
	if(n > 2)
	{
		printf("0 1 ");
		while(n > 2)
		{
			fib = n1 + n2;
			printf("%d ",fib);
			
			n1 = n2;
			n2 = fib;
			n--;
		}
	}
	else
	{
		while(i < n)
		{
			printf("%d ",i);
			i++;	
		}	
	}
	
	return 0;
}
