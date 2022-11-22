#define _CRT_SECURE_NO_WARINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	double data[5];
	int i;
	double total = 0, total2 = 0;
	printf("Enter 5 real numbers : ");

	for (i = 0; i < 5; i++)
	{
		scanf("%lf", &data[i]); //data를 구성하는 실수 입력
		total += data[i];
	}
	double mean = total / 5.0; //평균 구하기

	for (i = 0; i < 5; i++)
	{
		total2 += pow(data[i] - mean, 2);
	}
	double sv = sqrt(total2 / 5.0);

	printf("Standard Deviation : %.3lf", sv);
	return 0;
}