#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int number;
	printf("8진수로 입력하려면 012, 16진수로 입력하려면 0x12처럼 입력하세요.\n");
	printf("정수?");
	scanf("%i", &number);

	printf("8진수: %o\n10진수: %d\n16진수: %x", number, number, number);
	return 0;


}