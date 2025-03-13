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
//	// score배열을 0으로 초기화 하였을 때는 다 0으로 나옴
//	// score배열을 선언만 하고 초기화 하지 않았을 경우에는 쓰레기값이 나옴.
//	//for (i = 0; i < count; i++) {
//	//	printf("%d\n", score[i]);
//	//}
//
//	for ( i = 0; i < count; i++) {
//	
//		printf("점수를 입력하세요:");
//		scanf_s(" %d", &score[i]);
//	}
//	
//	for ( i = 0; i < count; i++) {
//
//		sum += score[i];
//	}
//
//	avg = (double) sum / count;
//	printf("총점은 %d점입니다.\n", sum );
//	printf("평균은 %.1lf입니다.\n", avg);
//	return 0;
//}