#include<stdio.h>
#include<string.h>

//연습문제 21-1을 응용하여, 
//“문자열”을 입력받아, 이 문자열 내의 대문자는 소문자로, 소문자는 대문자로 바꾸고,
//다른 문자는 그대로 출력해주는 프로그램을 작성하세요.

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
