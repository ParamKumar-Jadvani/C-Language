#include<stdio.h>

int main()
{
	int n;
	printf("Enetr the Array Size: ");
	scanf("%d",&n);
	
	int a[n],i;
	
	printf("Enetr the Array elements :\n");
	for(i=0; i<n; i++)
	{
		printf("a[%d] : ",i);
		scanf("%d",&a[i]);
	}
	
	printf("the Sqare are :");
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]*a[i]);
	}
	
	return 0;	
}
