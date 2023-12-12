#include<stdio.h>

int main()
{
	char name[20];
	int i;
	
	printf("Enter Your Name :");
	scanf("%[^\n]",&name);
	
	for(i=0; name[i] != '\0'; i++)
	{
		if(name[i] >= 65 && name[i] <= 90)
			name[i] +=32;
		else
			continue;
	}
	
	printf("Your Name is : %s \n",name);
	return 0;
}
