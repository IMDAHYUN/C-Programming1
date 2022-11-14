#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//길이가 6인 int형 배열 arr1과 arr2를 선언하고,
//이를 각각 1, 2, 3, 4, 5, 6과 7, 8, 9, 10, 11, 12로 초기화한 다음,
//이 두 배열에 저장된 값을 뒤바꿔주고, 이 결과를 출력하는 프로그램을 작성하세요.
//단, 연습문제 13 - 1 - 4와 유사하게, 두 배열을 가리키는 포인터 변수 두 개를 선언해서 이를 활용하여 저장된 값을 뒤바꿔야 합니다.

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



	//바꾸는 과정
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