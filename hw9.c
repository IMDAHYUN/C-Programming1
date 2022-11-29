#include<stdio.h>
#include<string.h>


int main()
{
	char str[100];

	printf("Input> ");
	fgets(str, strlen(str), stdin);
	str[strlen(str) - 1] = 0;


	for (int i = 0; str[i]; i++)
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] = str[i] + 32;
		else if (str[i] >= 97 && str[i] <= 122)
			str[i] = str[i] - 32;
	}
	printf("Output> %s\n", str);

	return 0;
}