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
	
	printf("계산기 프로그램입니다\n");

	while (1) {
	
		printf("계속 하시겠습니까? ");
		scanf("%c", &mode);

		if (mode == 'q') {
			break;
		}
	



	}
	printf("두개의 정수를 입력하세요\n");
	scanf("%d%d", &a, &b);
	printf("연산자를 입력하세요\n");
	scanf(" %c", &op);

	switch (op) {

	case '+':
		result = add(a, b);
		printf("연산결과 %d %c %d = %d\n", a, op, b, result);
		break;
	case '-':
		result = minus(a, b);
		printf("연산결과 %d %c %d = %d\n", a, op, b, result);
		break;
	case '*':
		result = mul(a, b);
		printf("연산결과 %d %c %d = %d\n", a, op, b, result);
		break;
	case '/':
		if (b == 0) {
			printf("연산결과 : 0으로 나눌 수 없습니다.\n");
		}
		else {
			result2 = div(a, b);
			printf("연산결과 %d %c %d = %.1lf\n", a, op, b, result2);
		}
		break;
	default:
		printf("잘못된 연산자입니다.\n");
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