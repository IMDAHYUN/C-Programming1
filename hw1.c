#include <stdio.h>

int main(void)
{
	int num1 = 10;
	int num2 = 15;
	int num3 = num1 & num2;
	int num4 = num1 | num2;
	int num5 = num1 ^ num2;

	printf("10 & 15 = %d\n10 | 15 = %d\n10 ^ 15 = %d", num3, num4, num5);

	return 0;
}