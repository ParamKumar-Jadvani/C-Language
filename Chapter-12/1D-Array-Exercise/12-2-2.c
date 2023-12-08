#include<stdio.h>

int getInt()
{
	int n;
	scanf("%d",&n);
	return n;
}

int main()
{
	int y1,y2,n;
	
	printf("Enter the Year 1 :");
	y1 = getInt();
	
	printf("Enter the Year 2 :");
	y2 = getInt();
	
	n = ((y2-y1) / 4) + 1 ;
	
	int lY[n];
	int i;
	
	for(i=0; y1<=y2; y1++)
	{
		if(y1% 4 == 0)
		{
			lY[i] = y1;
			i++;
		}
	}
	
	printf("Leap year of your given range is : \n\n");
	for(i=0; i<n; i++)
	{
		printf("%d ",lY[i]);
	}
	
	return 0;
	
}
