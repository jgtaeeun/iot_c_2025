#include <stdio.h>

void myStrInput(char*, int);

int main() {

	char str[100];

	myStrInput(str, 100);	//���ڿ� �迭�� �ּҸ� �Ѱ��ش�.
	printf("�Է��� ���ڿ�:%s\n", str);
	return 0;
}

void myStrInput(char* c, int i) {
	int j = 0;
	char temp;
	printf("���ڿ��� �Է��ϼ���: ");

	while (1) {
		temp = getchar();
		if ((temp == '\n') || (j <= i - 1)) break;
		*(c + j) = temp;
		j++;
	}
	*(c + j) = '\0';


}
