//#define _CRT_SECURE_NO_WARNINGS
//
//#include <stdio.h>
//
//typedef struct vision {
//
//	double left;
//	double right;
//
//}Vision;
//
//Vision exchange(Vision);			//�Լ�����
//
//int main() {
//
//	Vision rot;
//	printf("�÷� �Է��ϼ���:");
//	scanf("%lf%lf", &(rot.left), &(rot.right));
//	rot =exchange(rot);
//	printf("�ٲ� �÷�:%.1lf %.1lf \n", rot.left, rot.right);
//
//	return 0;
//}
//
//Vision exchange(Vision v) {
//	double temp = v.left;
//	v.left = v.right;
//	v.right = temp;
//	return v;
//}