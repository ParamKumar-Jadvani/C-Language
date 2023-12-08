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
	printf("Enetr the Row :");
	r = getInt();
	
	printf("Enter the Column :");
	c = getInt();
	
	int a[r][c];
	int i,j;;
	float avg=0;
	
	printf("Enter the Elements of An Array :\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("a[%d][%d] : ",i,j);
			a[i][j] = getInt();
		}
		printf("\n");
	}
	
	printf("\n\n An Array Elements : ");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			avg += (float)a[i][j];
		}
	}
	
	printf("\n\n\tArray Avrage is : %.2f\n",avg/ (r+c) );
	
	
}
