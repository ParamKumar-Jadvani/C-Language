#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char pass[50];
	int i, lwr=0,dig=0, space=0, sym=0;
	
	here:
	printf("Enter Your Password :");
	gets(pass);
	
	for(i=0; pass[i] != '\0'; i++)
	{
		if(( pass[i] >=65 && pass[i] <=90 ) || ( pass[i] >= 97 && pass[i] <= 122))
			lwr++;
		
		else if(pass[i] >=48 && pass[i] <=57)
			dig++;
		
		else if(pass[i] == 32)
			space++;
		else
			sym++;
	}
	
	if(lwr>0 && sym>0 && dig>0 && space==0 && strlen(pass) > 5)
		printf("Your Password is Strong !!\n");
	else
	{
		system("cls");
		printf("Your Password is Weak !!\n");
		printf("Please make strong password !!\n\n");
		goto here;
	}
}
