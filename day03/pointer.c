//#include <stdio.h>

//int main(void) {
//
//
//	//int p;			//intŸ���� ��������
//	//int* p;			//intŸ���� ������ ���� ���� 
//	//char* pc;		//charŸ���� ������ ���� ����
//	//double* pd;
//
//	int num =100;
//	printf("num�� �ּ� : %p \n", &num);
//	printf("num�� �� : %d \n", num);
//
//	int* p = &num;			// * �ƹ��ǹ̾��� ǥ��
//	printf("������ ���� p�� ����� ��(�ּ�): %p\n", p);
//	printf("������ ���� p�� ����Ű�� ���� ��: %d\n", *p);   //* �������� ������
//
//	num = 100 + 1;
//	//num�� �б�
//	printf("num�� �б�-����num :%d\n", num);
//	printf("num�� �б�-�������� :%d\n", *p);
//
//	//���������� num�� 1 ������Ű��
//	*p += 1;
//	printf("num�� �б�-����num :%d\n", num);
//	printf("num�� �б�-�������� :%d\n", *p);
//
//	return 0;
//}