#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() {
//
//	char str[100];
//
//	//scanf("%s", str);의 경우 공백 주의 필요   -%s는 공백을 포함하지 않는 문자열을 읽을 때 사용됩니다.
//	//printf("문자열 입력>> ");  //언더커버 하이스쿨
//	//scanf("%s", str);
//	//
//	//printf("받은 문자열 >> %s\n", str);//언더커버
//	//scanf("%s", str);
//	//printf("다음 문자열 >> %s\n", str);//하이스쿨
//
//	/*gets*/  // gets 함수는 사용자로부터 문자열을 입력받을 때 공백을 포함한 문자열을 받을 수 있도록 돕지만
//	//printf("공백을 포함한 입력:");  //언더커버 하이스쿨
//	//gets(str);
//	//printf("입력 문자열:%s\n", str);  //언더커버 하이스쿨
//
//	/*fgets*/
//	printf("공백을 포함한 입력:");  //언더커버 하이스쿨 금요일밤
//	fgets(str, sizeof(str), stdin);
//	printf("입력 문자열:%s\n", str);  //언더커버 하이스쿨 금요일밤
//
//	return 0;
//}