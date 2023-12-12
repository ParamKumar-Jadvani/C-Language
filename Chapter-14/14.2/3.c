#include<stdio.h>
#include<string.h>

int main()
{
	char name[20];
	
	printf("Enter Your String :");
	gets(name);
	
	if(name[0] >=97 && name[0] <=122)
		name[0] -= 32;
		
	printf("Your String is : ");
	puts(name);
	
	return 0;
}
