//#include <stdio.h>
//
//int main(void) {
//
//	int n = 10;
//	double db = 3.14;
//
//	void* p;
//	p = &n;
//
//	//printf("*p=%d\n", *p);   //불완전형식 void는 허용되지 않음
//	printf("*p=%d\n", *(int *)p);   
//
//	p = &db;
//	//printf("*p=%.2lf\n", *p);   //불완전형식 void는 허용되지 않음
//	printf("*p=%.2lf\n", *(double*)p);
//
//
//
//	return 0;
//}