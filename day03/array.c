///* 배열 */
//#include <stdio.h>
//
//int main(void) {
//
//	int ary[5] = { 1,2,3,4,5 };		//정수형 배열선언
//	int ary2[] = { 6,7,8,9,10 };
//	int ary3[5];
//	int i;
//	for (i = 0; i < 5; i++) {
//		printf("ary[%d] :%d ", i,ary[i]);
//	}
//	printf("\n");
//
//	for (i = 0; i < sizeof(ary2)/sizeof(ary2[0]); i++) {
//		printf("ary2[%d]:%d ",i, ary2[i]);
//	}
//	printf("\n");
//
//	//배열의 요소 접근
//	ary[2] = 100;
//	printf("ary[2]:%d\n", ary[2]);
//	return 0;
//}