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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 각 사이즈별 함수 정의
	void SmallOrder(int size)
	{
		printf("S 사이즈 %d잔을 주문합니다\n", size);
	}

	void TallOrder(int size)
	{
		printf("T 사이즈 %d잔을 주문합니다\n", size);
	}
	void GrandOreder(int size);
	{
		printf("G 사이즈를 %d잔을 주문합니다\n", size);
	}

	void CoffeeOrder(void)
	{
		char coffee;
		int sizze;

		print("커피 사이즈(S,T,G)와 주문 수량?");
		scanf("%c %d, &coffee, &size");

		// 입력값에 따라 적절한 함수 호출
		if (coffee == 'T') {
			TallOrder(size);
		}
		else if (coffe == 'G') {
			GrandeOrder(size);
		}
		else {
			print("잘못된 사이즈입니다: 5c\n", coffe);
		}
	}
	else{
int main(void)
{
	coffee();
	{
		CoffeeOrder();
		retren0;
	}
		{
