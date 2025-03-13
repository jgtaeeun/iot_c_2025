/*
문자열 배열
-널문자 포함한 크기 고려
*/
//#define _CRT_SECURE_NO_WARNINGS 
//#include <stdio.h>
//#include <string.h>
//int main(void) {
//
//	char fruit[100] = "blueberry";
//	printf("fruit:%s\n", fruit);
//
//	char str[5] = "apple";   // 널문자를 포함할 공간 부족
//	printf("str:%s\n", str);
//
//	char str2[6] = "apple";   
//	printf("str2:%s\n", str2);
//
//	char str3[7] = { 'o','r','a','n','g','e' };
//	printf("str3:%s\n", str3);
//
//	char str4[7];
//	str4[0] = 'o';
//	str4[1] = 'r';
//	str4[2] = 'a';
//	str4[3] = 'n';
//	str4[4] = 'g';
//	str4[5] = 'e';
//	str4[6] = '\0';
//	printf("str4:%s\n", str4);
//	
//	printf("str3[6]:%s\n", str3[6]);  //str3[6]:(null)
//	
//	//문자열 복사
//	
//	strcpy_s(fruit, sizeof(fruit), str3);
//	printf("fruit:%s\n", fruit);
//
//	strcpy_s(fruit, sizeof(fruit), "watermelon");
//	printf("fruit:%s\n", fruit);
//
//	strcpy(str2, "lemon");
//	printf("str2:%s\n", str2);
//	return 0;
//}