
#include <stdio.h>

//int main(void) {
//
//	char ch;
//	int in;
//	double db;
//
//	char* pc = &ch;
//	int* pi = &in;
//	double* pd = &db;
//	
//	/* 64��Ʈ �ý��ۿ����� 8����Ʈ ũ��� ����˴ϴ�. 
//	��, ������ Ÿ�԰� ������� �ּ� ��ü�� 8����Ʈ ũ��� ����Ǳ� ������ sizeof(&ch), sizeof(&in), sizeof(&db) ��� 8�� ��µ˴ϴ�.*/
//	printf("char�� ����ch�� �ּ� ũ��:%d\n", sizeof(&ch));
//	printf("int�� ����in�� �ּ� ũ��:%d\n", sizeof(&in));
//	printf("double�� ����db�� �ּ� ũ��:%d\n", sizeof(&db));
//
//	/*
//	�����ʹ� ������ �ּҸ� ��� �ֱ� ������, �������� ũ��� �޸� �ּ� ũ��� �����մϴ�.
//	��, 32��Ʈ �ý��ۿ����� �������� ũ�Ⱑ 4����Ʈ, 64��Ʈ �ý��ۿ����� 8����Ʈ�� �˴ϴ�.
//	*/
//	printf("char* �������� ũ��:%d\n", sizeof(pc));
//	printf("int* �������� ũ��:%d\n", sizeof(pi));
//	printf("double* �������� ũ��:%d\n", sizeof(pd));
//
//	printf("char* �����Ͱ� ��:%d\n", sizeof(pc));
//	printf("int* �������� ũ��:%d\n", sizeof(pi));
//	printf("double* �������� ũ��:%d\n", sizeof(pd));
//
//	return 0;
//}