#include <stdio.h>

void myStrInput(char*, int);

int main() {

	char str[100];

	myStrInput(str, 100);	//문자열 배열의 주소를 넘겨준다.
	printf("입력한 문자열:%s\n", str);
	return 0;
}

void myStrInput(char* c, int i) {
	int j = 0;
	char temp;
	printf("문자열을 입력하세요: ");

	while (1) {
		temp = getchar();
		if ((temp == '\n') || (j <= i - 1)) break;
		*(c + j) = temp;
		j++;
	}
	*(c + j) = '\0';


}
