//#include <stdio.h>
//
//
//
//int main(void) {
//
//	//const int num = 10;
//	////const������ �������� �Ұ� num = 20;
//	//
//	//int* num1 = &num;
//	//*num1 = 30;
//	//printf("�����ͷ� �� ������ num :%d\n", num);
//
//
//	//int num2 = 20;
//	//num2 = 10;
//	//
//	//int* pnum2 = &num2;
//	//*pnum2 = 30;
//	//printf("�����ͷ� �� ������ num2 :%d\n", num2);
//
//
//	int num4 = 5, num5 = 10;
//	
//	const int* pn2 = &num4;			//�����ͻ�� 
//									
//	
//	//*pn2 = 100;	 �����ͺ����� ���� �������� ������ �����Ѵ�./������ ��ü�� ���� �����մϴ�.
//	num4 = 100;
//	pn2 = &num4;
//	printf("* pn2 :%d\n", *pn2);
//
//	
//	num4 = 5;
//	int* const pnum3 = &num5;			//������ ���
//	//pnum3 = &num4;  // ����Ʈ������ ����Ű�� �ּ��� ������ �����Ѵ�.
//	*pnum3 = num4;
//	
//	printf("* pnum3 :%d\n", *pnum3);
//	return 0;
//
//	const int* const pnum4 = &num5;  //������ ����� ������ ����� ���յ� ����
//	//pnum4 = &num4;   //�����ͻ��
//	//*pnum4 = 200;   //�����ͻ��
//
//
//}

