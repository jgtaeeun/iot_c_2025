//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main() {
//
//	char ch;
//	printf("알파벳을 입력하세요> ");
//	scanf(" %c", &ch);  //공백을 추가해서 버퍼에서 불필요한 개행문자를 무시하도록 할 수 있습니다.
//
//	if ((ch >= 'A') && (ch <= 'Z')) {
//		printf("대문자를 입력하셨군요.소문자로 변환한 값은 %c입니다.\n", ch+('a'-'A'));
//	}
//	else if ((ch >= 'a') && (ch <= 'z')) {
//		printf("소문자를 입력하셨군요.대문자로 변환한 값은 %c입니다.\n", ch - ('a' - 'A'));
//	}
//	else {
//		printf("알파벳을 입력하지 않았습니다.\n");
//	}
//	return 0;
//}