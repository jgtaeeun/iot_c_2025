//#include <stdio.h>
//#include <stdlib.h>
//int main() {
//
//	char str[100];	//main�Լ� �� �������� ->���ø޸𸮿� ����
//	char* ps;
//	printf("���ڿ��� �Է��ϼ���>");
//	gets(str);
//	printf("�Է��� ���ڿ�:%s\n", str);
//
//	//�������� ����
//	ps = (char *) malloc(strlen(str) + 1);   //strlen�� �ι��� ���� ���ڿ� ������ ��ȯ�ϹǷ� , �ι��������ϱ� ���� +1 ���ش�.
//	if (ps == NULL) {
//		exit(1);
//	}
//	strcpy(ps, str);
//	printf("heap:%s\n", ps);			//�����޸� ��ȯ
//
//	free(ps);
//	return 0;
//
//}