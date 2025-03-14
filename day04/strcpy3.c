//#include <stdio.h>
//
//void mystr_cpy(char*, char*,  int);
//
//int main(void) {
//
//
//	char str[100] = "언더커버 하이스쿨 금요일밤 9시50분 MBC 본방사수~";
//	char str2[100];
//
//	mystr_cpy(str, str2, sizeof(str)); //주소를 전달
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
//	str2[i] = '\0';			//널문자를 꼭 넣기!!!
//
//}