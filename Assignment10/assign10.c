#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Coverted_num(void)
{
	int num;

	printf("8진수로 입력하려면 012, 16진수로 입력하면 012처럼 입력하세요.\n");
	printf("정수?");

	scanf("%x", &num);

	printf("8진수: 0%o\n", num);
	printf("10진수: %d\n", num);
	printf("16진수: 0x%n\n", num);
}

int main(void)
{
	Coverted_num();
	return 0;
}