//#include <stdio.h>
//
//void input_c(char *, int);
//
//int main(void) {
//
//	char ch[20];
//
//	//문자입력 받아 배열에 넣는 함수 호출
//	input_c(&ch[0], 20);
//	printf("ch 배열: %s\n", ch);
//
//	return 0;
//}
//
//void input_c(char* pc, int size) {
//	int idx = 0;
//	char c;
//
//	printf("문자열을 입력하세요:");
//	while (1) {
//		
//		c=getchar();
//		//size-1, 널문자일경우 break
//		if ((idx >= size - 1) || (c == '\n')) break;
//		*(pc + idx) = c;
//		idx++;
//	}
//	pc[idx] = '\0';
//	
//
//}