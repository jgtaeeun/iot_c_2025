//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//int main() {
//	char str[10] = "banana";
//	printf("str:%s\n", str);
//	printf("str[0]:%c\n", str[0]);  //b
//	printf("str[5]:%c\n", str[5]);  //a
//	printf("str[6]:%c\n", str[6]);  //
//	printf("str[6]:%s\n", str[6]);  //(null)
//
//	//char str2[5] = "apple"; 
//	//printf("str2:%s\n", str2); //str2:apple���������������������� ? ? K
//
//
//	char str3[6] = "apple";
//	printf("str3:%s\n", str3); //apple
//	str3[0] = 'A';
//	printf("str3:%s\n", str3);
//	
//	
//
//	//���ڿ����� ���2) ���ڿ� �Լ� ��� strcpy(),strcpy_s()
//	char str4[6];
//	strcpy(str4, str3);   //#define _CRT_SECURE_NO_WARNINGS �ڵ� �ʿ���
//	printf("str4:%s\n", str4);
//	//printf("%d", sizeof(str4));  //str4�� �迭ũ�� ��ȯ 6
//	
//	/*strcpy_s(str4, sizeof(str4) , str3);
//	printf("str4:%s\n", str4);*/
//
//
//	//���ڿ����� ���1) for���� ���� �ε������� ���糢���
//	char str5[6];
//	for (int i = 0; i < sizeof(str5); i++) {
//		str5[i] = str3[i];
//	}
//	printf("str5:%s\n", str5);
//	return 0;
//}