//#include <stdio.h>
//
//void mystr_cpy(char*, char*,  int);
//
//int main(void) {
//
//
//	char str[100] = "���Ŀ�� ���̽��� �ݿ��Ϲ� 9��50�� MBC ������~";
//	char str2[100];
//
//	mystr_cpy(str, str2, sizeof(str)); //�ּҸ� ����
//	printf("str:%s\n", str);
//	printf("str2:%s\n", str2);
//
//	return 0;
//}
//
//
//
//void mystr_cpy(char* str, char* str2, int size) {
//	int i;
//	for (i = 0; i < size-1; i++) {
//		if (str[i] == '\0') break;
//		str2[i] = str[i];
//	}
//	str2[i] = '\0';			//�ι��ڸ� �� �ֱ�!!!
//
//}