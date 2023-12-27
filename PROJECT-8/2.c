#include<stdio.h>

int getInt()
{
	int n;
	scanf("%d",&n);
	return n;
}
void pointer();

int main()
{
	printf("Enter Row : ");
	int r = getInt();
	
	printf("Enter Column : ");
	int c = getInt();
	
	int a[r][c];

	int i, j;

	int *ptr[r][c];
	ptr[0][0] = &a[0][0];
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			ptr[i][j] = &a[i][j];
		}
	}
	
	
	
	pointer(r,c,&ptr);

	return 0;
}

void pointer(int r, int c, int *ptr[r][c])
{
	int i,j;
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("Enter A[%d][%d] : ",i,j);
			*ptr[i][j] = getInt();
		}
	}
	
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",*ptr[i][j]);
		}
		printf("\n");
	}

	printf("\nCube\n");
	for(i=0; i<r; i++)
	{
		for(j=0; j<c; j++)
		{
			printf("%d ",(*ptr[i][j])*(*ptr[i][j])*(*ptr[i][j]));
		}
		printf("\n");
	}
}



