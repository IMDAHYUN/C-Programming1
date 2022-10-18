#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {

	int demical;

	printf("Please enter a number : ");
	scanf("%d", &demical);
	demtobin(demical);
	printf("\n");
	return 0;
}

int demtobin(int demical)
{
	if (demical == 0 || demical == 1)
		printf("%d", demical);

	else
	{
		demtobin(demical / 2);
		printf("%d", demical % 2);
	}
	return 0;
}