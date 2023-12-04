#include<stdio.h>

int main()
{
	int n;
	
	printf("Enter the N : ");
	scanf("%d",&n);
	
	int a[n],b[n],c[n],i;

	for(i=0; i<n; i++)
	{
		printf("Enter the A[%d] : ",i+1);
		scanf("%d",&a[i]);
	}
	printf("\n\n");
	for(i=0; i<n; i++)
	{
		printf("Enter the B[%d] : ",i+1);
		scanf("%d",&b[i]);
	}
	printf("\n\n");
	for(i=0; i<n; i++)
	{
		c[i] = a[i] + b[i];
		printf("C[%d] : %d\n",i+1,c[i]);
	}
	
	return 0;
}

