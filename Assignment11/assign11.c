#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void pi(void)
{
	double pi = 3.14159265;

	printf("pi = %.2f\n", pi);
	printf("pi = %.4f\n", pi);
	printf("pi = %.6f\n", pi);
	printf("pi = %.8f\n", pi);
	printf("pi = %e\n", pi);

}

int main(void)
{
	pi();
	return 0;

}