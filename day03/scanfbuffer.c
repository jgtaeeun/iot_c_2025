#include <stdio.h>

int main() {

	int num, grade;

	printf("�й��Է�: ");
	scanf_s("%d", &num);
	//getchar();
	printf("�����Է�: ");
	grade= getchar();   //���� ���ڴ� ȭ�鿡 ��µ��� �ʱ� ������
	printf("�й�:%d  ����:%c", num, grade);
	return 0;
}