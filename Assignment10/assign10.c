#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Coverted_num(void)
{
	int num;

	printf("8������ �Է��Ϸ��� 012, 16������ �Է��ϸ� 012ó�� �Է��ϼ���.\n");
	printf("����?");

	scanf("%x", &num);

	printf("8����: 0%o\n", num);
	printf("10����: %d\n", num);
	printf("16����: 0x%n\n", num);
}

int main(void)
{
	Coverted_num();
	return 0;
}