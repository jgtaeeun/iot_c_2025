#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int add(int, int);
int minus(int, int);
int mul(int, int);
double div(int, int);

int main(void) {
	int a, b;
	char op;
	int result;
	double result2;
	char mode;
	int flag = 0;

	printf("���� ���α׷��Դϴ�\n");

	while (1) {
		//������:�ι�° �������ʹ� mode�� ���� ����Ǿ��־ scanf()�� �̷������ ���� => scanf(" %c", &mode) ������ �������ν� �ذ���
		/*
		scanf("%c", &mode); -> ���� �Է¿��� ���� ���� ����(\n)�� ���� ���ڰ� �״�� �ԷµǸ� mode ������ ����˴ϴ�. 
								�̷� ���� ����ġ ���� ������ �߻��� �� �ֽ��ϴ�.

		scanf(" %c", &mode); -> ���� ������ ���� ���ڳ� ���� ���ڸ� �����ϰ�, ����ڰ� �Է��� ù ��° ����� ���ڸ� �ް� �˴ϴ�.
								�̷� ���� ������ �۵��մϴ�.

		�׷��� ���������� �۵��� ����:
		ó�� �Է� �� scanf(" %c", &mode);�� �Է� ���ۿ� ���� �ִ� ���� ���ڸ� �����ϰ� ����� �Է��� ����� �ޱ� ������, 
		�� ��° �������͵� �Է��� ���������� ó���˴ϴ�.
		*/
		
		printf("��� �Ͻðڽ��ϱ�? ");
		scanf(" %c", &mode);  
		
		

		if (mode == 'q') {
			break;
		}
	

		printf("�ΰ��� ������ �Է��ϼ���\n");
		scanf("%d%d", &a, &b);
		printf("�����ڸ� �Է��ϼ���\n");
		scanf(" %c", &op);

		switch (op) {

		case '+':
			result = add(a, b);
			printf("������ %d %c %d = %d\n", a, op, b, result);
			break;
		case '-':
			result = minus(a, b);
			printf("������ %d %c %d = %d\n", a, op, b, result);
			break;
		case '*':
			result = mul(a, b);
			printf("������ %d %c %d = %d\n", a, op, b, result);
			break;
		case '/':
			if (b == 0) {
				printf("������ : 0���� ���� �� �����ϴ�.\n");
			}
			else {
				result2 = div(a, b);
				printf("������ %d %c %d = %.1lf\n", a, op, b, result2);
			}
			break;
		default:
			printf("�߸��� �������Դϴ�.\n");
		}




	}
	
	

	return 0;
}

int add(int a, int b) {
	int result = a + b;
	return result;
}

int minus(int a, int b) {
	int result = a - b;
	return result;
}

int mul(int a, int b) {
	int result = a * b;
	return result;
}

double div(int a, int b) {
	double result = (double) a / b;
	return result;
}