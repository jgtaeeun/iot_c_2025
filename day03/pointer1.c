/*
	pointer -�ּ��� ũ��� ��ǻ�� ȯ����� �ٸ���. (64bit��ǻ�Ϳ����� 8 , 32bit��ǻ�Ϳ����� 4)
	�����ͺ����� ũ��� Ÿ�Կ� ������� �����ϴ�. �ֳ��ϸ� �ּ��� ũ��� �����ϱ� ����

	32bit��ǻ�ʹ� 4GB �޸�������� 
	1KB=1024byte = 2��10�� , 1GB=1KB*1KB*1KB= 2��30�� ,  4GB=2��2�� * 1GB =2�� 32��
*/


#include <stdio.h>

//int main(void) {
//
//	char ch;
//	int n;
//	
//	char* pch = &ch;
//	int* pn = &n;
//
//	
//	printf("char �ּ� ũ�� : %d\n", sizeof(&ch));   //64bit��ǻ�Ϳ����� 8
//	printf("int �ּ� ũ�� : %d\n", sizeof(&n));
//
//	printf("������ ���� pch ũ�� : %d\n", sizeof(pch));
//	printf("������ ���� pn ũ�� : %d\n", sizeof(pn));
//
//	printf("������ ���� pch�� ����Ű�� ���� ũ�� : %d\n", sizeof(*pch));
//	printf("������ ���� pn�� ����Ű�� ���� ũ�� : %d\n", sizeof(*pn));
//
//	
//
//	return 0;
//}