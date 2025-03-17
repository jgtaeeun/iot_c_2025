/*
	함수포인터
*/

//#include <stdio.h>
//
//int sum(int a, int b);
//int minus(int a, int b);
//
//
//int main(void) {
//
//	int (*fp) (int, int);	// 함수포인터
//
//	int res;
//	
//	fp = sum;
//	res = fp(10, 20);
//	//res =sum(10, 20);
//	printf("sum(10, 20)=%d\n", res);
//	
//	fp = minus;
//	res = fp(10, 20);
//	//res = minus(10, 20);
//	printf("minus(10, 20)=%d\n", res);
//	return 0;
//}
//
//int sum(int a, int b) {
//	return  a + b;
//}
//
//int minus(int a, int b) {
//	return  a - b;
//}