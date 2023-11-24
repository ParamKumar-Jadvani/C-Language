#include<stdio.h>

int main()
{
	int n,i,j,count=0;
	
	printf("Enter the any Number :");
	scanf("%d",&n);
	
	printf("Your Prime Number 1 to %d is : ",n);
	for(i=1; i<=n; i++)
	{
			for(j=1; j<=n; j++)
			{
				if(i%j == 0)
				{
					count++;
				}
			}
	
			if(count <= 2)
			{
				printf("%d  ",i);
			}
			count=0;
	}
	
	return 0;
}
