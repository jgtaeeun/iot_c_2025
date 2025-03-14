#include <stdio.h>

int main() {

	int num, grade;

	printf("학번입력: ");
	scanf_s("%d", &num);
	//getchar();
	printf("학점입력: ");
	grade= getchar();   //개행 문자는 화면에 출력되지 않기 때문에
	printf("학번:%d  학점:%c", num, grade);
	return 0;
}