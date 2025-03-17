//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//
//	char fruit[3][20];
//	char* p[3];
//	int i;
//	for (i = 0; i < 3; i++) {
//		printf("과일 입력하세요");
//		scanf(" %s", &fruit[i]);
//
//	}
//	p[0] = &fruit[0];
//	p[1] = &fruit[1];
//	p[2] = &fruit[2];
//
//	for (i = 0; i < 3; i++) {
//		printf("%s ", p[i]);    //문자열 포인터 배열에서 p[i]는 문자열의 시작 주소를 가리킵니다. printf 함수는 이 주소가 가리키는 문자열 전체를 출력할 수 있기 때문에, * 없이 그냥 p[i]만 사용해도 됩니다.
//	}
//	return 0;
//}