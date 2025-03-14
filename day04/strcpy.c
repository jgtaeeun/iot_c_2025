/*
	문자열 복사함수
*/

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//
//int main(void) {
//
//	char str[100] = "orange";
//	char str2[100];
//	char* ps = "blueberry";  //문자열 상수

//	strcpy(str2, str);		//strcpy(복사, 원본)
//	printf("str:%s\n", str);
//	printf("str2:%s\n", str2);
//
//	strcpy(str2, "strawberry");
//	printf("str:%s\n", str);
//	printf("str2:%s\n", str2);
//
//	strcpy(str2, ps);
//	printf("str2:%s\n", str2);
//	printf(" ps:%s\n", ps);
//
//	strcpy(ps, str);     //문자열 상수는 값변경할 수 없다.
//	printf("str:%s\n", str);
//	printf(" ps:%s\n", ps);
//
//	strncpy(str2, str, 3);
//	printf("str2:%s\n", str2);
//
//	strncpy(str, ps, 4);      //시작주소부터 복사할 문자갯수를 설정할 수 있다. 
//	printf("str:%s\n", str);
//
//
//
//	return 0;
//}