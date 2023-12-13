#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	int i,j;
	
	printf("Enter Your String : ");
	gets(str);
	
	int freq[strlen(str)];
	
	for(i=0; i<strlen(str); i++)
	{
		freq[i] = 1;
		
		for(j=i+1; j<strlen(str); j++)
		{
			if(str[i] - str[j] == 0)
				freq[i]++;
		}
	}
	
	for(i=0; i<strlen(str); i++)
	{
		printf("%c => %d \n",str[i],freq[i]);
	}
	
	return 0;
}
