/*
	pointer -주소의 크기는 컴퓨터 환경따라 다르다. (64bit컴퓨터에서는 8 , 32bit컴퓨터에서는 4)
	포인터변수의 크기는 타입에 상관없이 일정하다. 왜냐하면 주소의 크기는 일정하기 때문

	32bit컴퓨터는 4GB 메모리저장공간 
	1KB=1024byte = 2의10승 , 1GB=1KB*1KB*1KB= 2의30승 ,  4GB=2의2승 * 1GB =2의 32승
*/


#include <stdio.h>

//int main(void) {
//
//	char ch;
//	int n;
//	
//	char* pch = &ch;
//	int* pn = &n;
//
//	
//	printf("char 주소 크기 : %d\n", sizeof(&ch));   //64bit컴퓨터에서는 8
//	printf("int 주소 크기 : %d\n", sizeof(&n));
//
//	printf("포인터 변수 pch 크기 : %d\n", sizeof(pch));
//	printf("포인터 변수 pn 크기 : %d\n", sizeof(pn));
//
//	printf("포인터 변수 pch가 가리키는 것의 크기 : %d\n", sizeof(*pch));
//	printf("포인터 변수 pn가 가리키는 것의 크기 : %d\n", sizeof(*pn));
//
//	
//
//	return 0;
//}