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
	
	int a[r][c];
	int i,j,k,l,temp=0;
	
	printf("Enter the Array Elements :\n\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("A[%d][%d] :",i,j);
			a[i][j] = getInt();
		}
	}
	
	printf("\n\n Array\n");
	for(i=0; i<r; i++)
	{
		for(k=i+1; k<r; k++)
		{
			for(j=0; j<c; j++)
			{
				for(l=j+1; j<c; j++)
				{
					if(a[i][j] < a[k][l]) 
					{
						//
						temp = a[i][j];
						a[i][j] = a[k][l];
						a[k][l] = temp;
					}
				}
			}
		}
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
	return 0;
	
	
}
