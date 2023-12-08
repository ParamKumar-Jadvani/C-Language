#include<stdio.h>

int getInt()
{
	int n;
	scanf("%d",&n);
	return n;
}

int main()
{
	int r,c;
	printf("Enter the Row :");
	r = getInt();
	
	printf("Enter the Column :");
	c = getInt();
	
	int a[r][c] , b[r][c] , sum[r][c];
	int i,j;
	
	// Input
	printf("\n\n\t--Enter the Array A--\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter the a[%d][%d] :",i,j);
			a[i][j] = getInt();
		}
	}
	
	printf("\n\n\t--Enter the Array B--\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter the b[%d][%d] :",i,j);
			b[i][j] = getInt();
		}
	}
	
	// Logic part
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			sum[i][j] = a[i][j] +b[i][j];
		}
	}
	
	// Output
	printf("\nArray A :");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
	}
	
	printf("\nArray B :");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",b[i][j]);
		}
	}
	
	printf("\nArray C :");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",sum[i][j]);
		}
	}
}
