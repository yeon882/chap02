#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Student(void) {

	int num;
	double grade;

	printf("��ȣ?");
	scanf("%d", &num);
	printf("����?");
	scanf("%61f,", &grade);

	printf("%d �л��� ������ %.6f �Դϴ�", num, grade);

}
int main(void)
{
	Student();
	return 0;

}