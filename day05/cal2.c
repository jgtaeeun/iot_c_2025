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
//	printf("�����ڸ� �����ϼ���(+|-|*|/)");
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
//		printf("�����ȣ�� �߸� �ԷµǾ����ϴ�.");
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
//		printf("0���� ���� �� �����ϴ�.\n");
//		return 0;  // 0���� ������ �ʵ��� ó��
//	}
//}
//
//void func(int (*fp)(int, int)) {
//	int a, b;
//	
//	printf("�μ��� �Է��ϼ���>");
//	scanf_s("%d%d", &a, &b);
//
//	int res = fp(a, b);  // �Լ� �����͸� ���� ���� ����
//	if (fp == sum) {
//		printf("�μ��� ��: %d\n", res);
//	}
//	else if (fp == minus) {
//		printf("�μ��� ��: %d\n", res);
//	}
//	else if (fp == mul) {
//		printf("�μ��� ��: %d\n", res);
//	}
//	else if (fp == div) {
//		printf("�μ��� ����: %d\n", res);
//	}
//}