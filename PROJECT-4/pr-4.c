#include<stdio.h>

int main()
{
	int i,j,s;
	
	for(i=5; i>=-1; i--)
	{
		for(s=1; s<=5-i; s++)
		{
			printf("  ");
		}
		for(j=1; j<=i; j++)
		{
			printf("%d ",j%2);
		}
		printf("\n");
	}
	
	return 0;
}