/*
�迭�� �ּ�, �迭�� ũ��
*/

//#include <stdio.h>
//
//int main(void) {
//	int ary[] = { 1,2,3 };
//	printf("�迭�� ��üũ��: %d\n", sizeof(ary) );	//12
//	printf("�迭�� �� ����� ũ��: %d\n", sizeof(ary[0]));	//4
//	printf("�迭�� ��� ����: %d\n", sizeof(ary)/sizeof(ary[0]));	//3
//
//	printf("�迭 �̸� : %p\n", &ary[0]);
//	printf("�迭 �̸� : %p\n", ary);  // 000000E3C1CFF888
//
//
//	printf("�迭 �ι�° ����� �ּ� : %p\n", &ary[1]);
//	printf("�迭 �ι�° ����� �ּ� :%p\n", ary + 1);  //000000E3C1CFF88C
//	printf("�迭 ����° ����� �ּ� :%p\n", ary + 2);  //000000E3C1CFF890
//
//	return 0;
//}