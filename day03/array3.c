//#include <stdio.h>
//
//int main(void) {
//
//	int score[5] = {0,};
//	int sum = 0;
//	int i;
//	int count = sizeof(score) / sizeof(score[0]);
//	double avg;
//
//	// score�迭�� 0���� �ʱ�ȭ �Ͽ��� ���� �� 0���� ����
//	// score�迭�� ���� �ϰ� �ʱ�ȭ ���� �ʾ��� ��쿡�� �����Ⱚ�� ����.
//	//for (i = 0; i < count; i++) {
//	//	printf("%d\n", score[i]);
//	//}
//
//	for ( i = 0; i < count; i++) {
//	
//		printf("������ �Է��ϼ���:");
//		scanf_s(" %d", &score[i]);
//	}
//	
//	for ( i = 0; i < count; i++) {
//
//		sum += score[i];
//	}
//
//	avg = (double) sum / count;
//	printf("������ %d���Դϴ�.\n", sum );
//	printf("����� %.1lf�Դϴ�.\n", avg);
//	return 0;
//}