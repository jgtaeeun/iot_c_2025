
#include <stdio.h>

//int main(void) {
//
//	char ch;
//	int in;
//	double db;
//
//	char* pc = &ch;
//	int* pi = &in;
//	double* pd = &db;
//	
//	/* 64비트 시스템에서는 8바이트 크기로 저장됩니다. 
//	즉, 변수의 타입과 관계없이 주소 자체는 8바이트 크기로 저장되기 때문에 sizeof(&ch), sizeof(&in), sizeof(&db) 모두 8이 출력됩니다.*/
//	printf("char형 변수ch의 주소 크기:%d\n", sizeof(&ch));
//	printf("int형 변수in의 주소 크기:%d\n", sizeof(&in));
//	printf("double형 변수db의 주소 크기:%d\n", sizeof(&db));
//
//	/*
//	포인터는 변수의 주소를 담고 있기 때문에, 포인터의 크기는 메모리 주소 크기와 동일합니다.
//	즉, 32비트 시스템에서는 포인터의 크기가 4바이트, 64비트 시스템에서는 8바이트가 됩니다.
//	*/
//	printf("char* 포인터의 크기:%d\n", sizeof(pc));
//	printf("int* 포인터의 크기:%d\n", sizeof(pi));
//	printf("double* 포인터의 크기:%d\n", sizeof(pd));
//
//	printf("char* 포인터가 기:%d\n", sizeof(pc));
//	printf("int* 포인터의 크기:%d\n", sizeof(pi));
//	printf("double* 포인터의 크기:%d\n", sizeof(pd));
//
//	return 0;
//}