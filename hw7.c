#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//���̰� 6�� int�� �迭 arr1�� arr2�� �����ϰ�,
//�̸� ���� 1, 2, 3, 4, 5, 6�� 7, 8, 9, 10, 11, 12�� �ʱ�ȭ�� ����,
//�� �� �迭�� ����� ���� �ڹٲ��ְ�, �� ����� ����ϴ� ���α׷��� �ۼ��ϼ���.
//��, �������� 13 - 1 - 4�� �����ϰ�, �� �迭�� ����Ű�� ������ ���� �� ���� �����ؼ� �̸� Ȱ���Ͽ� ����� ���� �ڹٲ�� �մϴ�.

int main(void)
{
	int arr1[6] = { 1, 2, 3, 4, 5, 6 };
	int arr2[6] = { 7, 8, 9 ,10, 11, 12 };

	int* ptr1 = arr1;
	int* ptr2 = arr2;
	int i, temp;




	//before swap
	printf("arr1 : ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\narr2 : ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr2[i]);
	}
	printf("\n");



	//�ٲٴ� ����
	for (i = 0; i < 6; i++)
	{
		temp = *ptr1;
		*ptr1 = *ptr2;
		*ptr2 = temp;

		ptr1++;
		ptr2++;
	}

	//after swap
	printf("\nafter swap\narr1 : ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr1[i]);
	}
	printf("\narr2 : ");
	for (i = 0; i < 6; i++)
	{
		printf("%d ", arr2[i]);
	}
	return 0;
}