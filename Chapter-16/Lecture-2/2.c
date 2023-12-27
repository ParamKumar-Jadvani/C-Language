#include <stdio.h>
#include <string.h>

int stringLength(char str[])
{
	return strlen(str);
}

void stringInput(char str[])
{
	printf("Enter Name : ");
	gets(str);
}

void stringOutput(char str[])
{
	printf("Name : %s \n", str);
}

int main()
{
	char str[20];

	stringInput(str);
	stringOutput(str);

	int num = stringLength(str);

	printf("Length of String is => %d\n", num);

	return 0;
}