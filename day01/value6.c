//// 상수
//#include <stdio.h>
//
//int main() {
//
//	int r = 10;
//	const double pi = 3.14;
//	double cf = 2 * pi * r;
//
//	//pi = 3.15; //상수이기에 변수명이름 가지고 직접참조로 바꿀 수 없기에 오류 뜬다.
//	
//	double* dp = &pi;		// 포인터를 이용한 간접참조로 값 변경은 가능하다.
//	*dp = 4.0;
//
//	printf("원둘레:%.2lf\n", cf);
//
//
//	printf("pi: % .2lf\n", pi); 
//
//	return 0;
//}