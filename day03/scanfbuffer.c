#include <stdio.h>

int main() {

	int num, grade;

	printf("�й��Է�: ");
	scanf_s("%d", &num);
	getchar();
	printf("�����Է�: ");
	grade= getchar();
	printf("�й�:%d  ����:%c", num, grade);
	return 0;
}