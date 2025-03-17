//#include <stdio.h>
//
//int sum(int, int);
//int minus(int, int);
//int mul(int, int);
//int div(int, int);
//
//void func(int(*fp)(int, int));
//
//int main(void) {
//
//	
//	char op;
//	
//	printf("연산자를 선택하세요(+|-|*|/)");
//	scanf_s(" %c", &op, sizeof(op));
//
//	int (*fp) (int, int);
//	switch (op) {
//	
//	case '+':
//		fp = sum;
//		func(fp);
//		break;
//	case '-':
//		fp = minus;
//		func(fp);
//		break;
//	case '*':
//		fp = mul;
//		func(fp);
//		break;
//	case '/':
//		fp = div;
//		func(fp);
//		break;
//	default :
//		printf("연산기호가 잘못 입력되었습니다.");
//	}
//	return 0;
//}
//
//
//int sum(int a, int b) {
//	return  a + b;
//}
//int minus(int a, int b) {
//	return a - b;
//}
//int mul(int a, int b) {
//	return a * b;
//}
//int div(int a, int b) {
//	if (b != 0) {
//		return a / b;
//	}
//	else {
//		printf("0으로 나눌 수 없습니다.\n");
//		return 0;  // 0으로 나누지 않도록 처리
//	}
//}
//
//void func(int (*fp)(int, int)) {
//	int a, b;
//	
//	printf("두수를 입력하세요>");
//	scanf_s("%d%d", &a, &b);
//
//	int res = fp(a, b);  // 함수 포인터를 통해 연산 수행
//	if (fp == sum) {
//		printf("두수의 합: %d\n", res);
//	}
//	else if (fp == minus) {
//		printf("두수의 차: %d\n", res);
//	}
//	else if (fp == mul) {
//		printf("두수의 곱: %d\n", res);
//	}
//	else if (fp == div) {
//		printf("두수의 나눔: %d\n", res);
//	}
//}