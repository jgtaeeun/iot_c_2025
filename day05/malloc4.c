#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char str[6];
	char* ps;
	for (int i = 0; i < 5; i++) {
		printf("문자를 입력하세요");
		scanf("%s", &str[i]);

		ps = (char*)malloc(strlen(str) + 1);
		strcpy(ps[i], str[i]);



	}

	for (int i = 0; i < 5; i++) {
		printf("%s\n", ps[i]);
		free(ps[i]);
	}


	return 0;
}