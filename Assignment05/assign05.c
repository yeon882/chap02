#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void weight(void) {
	double weight;

	printf("몸무게?");
	scanf ("%21f", &weight);

	printf("dlqfurgks ahaanrpsms %.2fKG입니다", weight);

}

int main(void)
{
	weight();
	return 0;
}