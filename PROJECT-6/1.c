#include <stdio.h>

int main()
{
	char str[20];
	int i, length = 0;

	printf("Enter Your String :");
	scanf("%[^\n]", &str);

	for (i = 0; str[i] != '\0'; i++)
	{
		length++;
	}

	char str1[length];

	for (i = 0; i < length; i++)
	{
		str1[length - i - 1] = str[i];
	}

	for (i = 0; i < length; i++)
	{
		if (str[i] - str1[i] == 0)
		{
			printf("Your string is Plaindrome !!\n");
			break;
		}
		else
		{
			printf("Your String is Not Plaindrome !!\n");
			break;
		}
	}

	return 0;
}
