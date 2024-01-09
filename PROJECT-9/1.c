#include<stdio.h>

int main()
{
	FILE *f1, *f2;
	int i;
	
	f1 = fopen("odd.txt","a");
	f2 = fopen("even.txt","a");
	
	if((f1 != NULL) && (f2 != NULL))
	{
		for(i=50; i<=70; i++)
		{
			if(i%2 == 0)
				fprintf(f2,"%d ",i);
			else
				fprintf(f1,"%d ",i);
		}
	}
	else
		printf("File Is Not Open !!\n");
		
	return 0;
}