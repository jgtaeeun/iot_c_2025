//#include <stdio.h>
//
//void input_c(char *, int);
//
//int main(void) {
//
//	char ch[20];
//
//	//�����Է� �޾� �迭�� �ִ� �Լ� ȣ��
//	input_c(&ch[0], 20);
//	printf("ch �迭: %s\n", ch);
//
//	return 0;
//}
//
//void input_c(char* pc, int size) {
//	int idx = 0;
//	char c;
//
//	printf("���ڿ��� �Է��ϼ���:");
//	while (1) {
//		
//		c=getchar();
//		//size-1, �ι����ϰ�� break
//		if ((idx >= size - 1) || (c == '\n')) break;
//		*(pc + idx) = c;
//		idx++;
//	}
//	pc[idx] = '\0';
//	
//
//}