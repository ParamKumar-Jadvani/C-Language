#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	char email[20], pass[20], email1[20], pass1[20];
	
	printf("Enter Your Email : ");
	gets(email);
	
	printf("Enetr Your Password : ");
	gets(pass);
	
	printf("Login Sucessfull !! \n\n\n");
	
	here:
	printf("Enter Your Email : ");
	gets(email1);
	
	printf("Enter Your Password : ");
	gets(pass1);
	
	if( (strcat(email,email1)) && strcat(pass,pass1) )
		printf("Login Sucessfull !!\n");
	else
	{
		printf("Login Failed !! \n");
		printf("Check your password or email !! \n\n");
		goto here;
	}
	
}
