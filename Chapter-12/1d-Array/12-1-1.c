#include<stdio.h>

int main()
{
	int n;
	printf("Enter the N :");
	scanf("%d",&n);
	
	int a[n],i;
	for(i=0; i<n; i++)
	{
		printf("Enter the a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	printf("\n\n Length Of an Array is : %d \n",n);
	
	return 0;
	
}
