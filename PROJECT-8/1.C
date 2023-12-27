#include<stdio.h>
#include<string.h>

int main()
{
	char str[20];
	
	printf("Enter String: ");
	gets(str);
	
	char *ptr[20];
	ptr[0] = &str[0];
	int i, count=0;
	
	for(i=0; str[i] != '\0'; i++)
	{
		ptr[i] = &str[i];
	}
	
	for(i=0; ptr[i] != '\0'; i++)
	{
		count++;
	}
	
	printf("Sting Length is : %d\n",count);
	return 0;
}
