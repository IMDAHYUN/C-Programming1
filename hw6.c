#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void oddnum(int* a, int len)
{
	int count = 0;
	int i;

	for (int i = 0; i < len; i++)
	{
		if (a[i] % 2 == 1)
			count++;
	}
	printf("Odd numbers : ");

	for (int i = 0; i < len; i++)
	{
		if (a[i] % 2 == 1)
		{ 
			count--;
			printf("%d", a[i]);
			if (count != 0)
				printf(" ");
		}
	}
	printf("\n");
}



void evennum(int* a, int len)
{
	int count = 0;
	for (int i = 0; i < len; i++)
	{
		if (a[i] % 2 == 0)
			count++;
	}
	printf("Even numbers : ");
	for (int i = 0; i < len; i++)
	{
		if (a[i] % 2 == 0)
		{
			count--;
			printf("%d", a[i]);
			if (count != 0)
				printf(" ");
		}
	}
}



int main(void)
{
	int a[5];
	printf("Please input five integers : ");

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	oddnum(a, sizeof(a) / sizeof(int));
	evennum(a, sizeof(a) / sizeof(int));
	 
	return 0;
}
