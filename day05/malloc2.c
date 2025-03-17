//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//
//	char str[100];	//main함수 내 지역변수 ->스택메모리에 저장
//	char* ps;
//	printf("문자열을 입력하세요>");
//	gets(str);
//	printf("입력한 문자열:%s\n", str);
//
//	//힙영역에 저장
//	ps = (char *) malloc(strlen(str) + 1);   //strlen은 널문자 제외 문자열 개수를 반환하므로 , 널문자포함하기 위해 +1 해준다.
//	if (ps == NULL) {
//		exit(1);
//	}
//	strcpy(ps, str);
//	printf("heap:%s\n", ps);			//동적메모리 반환
//
//	free(ps);
//	return 0;
//
//}