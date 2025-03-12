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

	printf("계산기 프로그램입니다\n");

	while (1) {
		//문제점:두번째 루프부터는 mode에 값이 저장되어있어서 scanf()가 이루어지지 않음 => scanf(" %c", &mode) 공백을 넣음으로써 해결함
		/*
		scanf("%c", &mode); -> 이전 입력에서 남은 개행 문자(\n)나 공백 문자가 그대로 입력되며 mode 변수에 저장됩니다. 
								이로 인해 예상치 못한 동작이 발생할 수 있습니다.

		scanf(" %c", &mode); -> 앞의 공백이 개행 문자나 공백 문자를 무시하고, 사용자가 입력한 첫 번째 비공백 문자를 받게 됩니다.
								이로 인해 예상대로 작동합니다.

		그래서 정상적으로 작동한 이유:
		처음 입력 시 scanf(" %c", &mode);로 입력 버퍼에 남아 있는 개행 문자를 무시하고 사용자 입력을 제대로 받기 때문에, 
		두 번째 루프부터도 입력이 정상적으로 처리됩니다.
		*/
		
		printf("계속 하시겠습니까? ");
		scanf(" %c", &mode);  
		
		

		if (mode == 'q') {
			break;
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