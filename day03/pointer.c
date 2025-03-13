//#include <stdio.h>

//int main(void) {
//
//
//	//int p;			//int타입의 변수선언
//	//int* p;			//int타입의 포인터 변수 선언 
//	//char* pc;		//char타입의 포인터 변수 선언
//	//double* pd;
//
//	int num =100;
//	printf("num의 주소 : %p \n", &num);
//	printf("num의 값 : %d \n", num);
//
//	int* p = &num;			// * 아무의미없는 표시
//	printf("포인터 변수 p에 저장된 값(주소): %p\n", p);
//	printf("포인터 변수 p가 가리키는 곳의 값: %d\n", *p);   //* 간접참조 연산자
//
//	num = 100 + 1;
//	//num값 읽기
//	printf("num값 읽기-변수num :%d\n", num);
//	printf("num값 읽기-간접참조 :%d\n", *p);
//
//	//간접참조로 num값 1 증가시키기
//	*p += 1;
//	printf("num값 읽기-변수num :%d\n", num);
//	printf("num값 읽기-간접참조 :%d\n", *p);
//
//	return 0;
//}