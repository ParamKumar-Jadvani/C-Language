#include<stdio.h>

int main()
{
	int n;
	printf("Enter the size :");
	scanf("%d",&n);
	
	int a[n];
	int i;
	
	printf("Enter the Array Elements :\n");
	for(i=0; i<n; i++)
	{
		printf("A[%d] : ",i);
		scanf("%d",&a[i]);	
	}
	
	printf("\nNegetive Array Elements are :");
	for(i=0; i<n; i++)
	{
		if(a[i] < 0)
			printf("%d ",a[i]);
	}
	
	return 0;
}
