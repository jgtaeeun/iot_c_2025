/*
배열의 주소, 배열의 크기
*/

//#include <stdio.h>
//
//int main(void) {
//	int ary[] = { 1,2,3 };
//	printf("배열의 전체크기: %d\n", sizeof(ary) );	//12
//	printf("배열의 한 요소의 크기: %d\n", sizeof(ary[0]));	//4
//	printf("배열의 요소 개수: %d\n", sizeof(ary)/sizeof(ary[0]));	//3
//
//	printf("배열 이름 : %p\n", &ary[0]);
//	printf("배열 이름 : %p\n", ary);  // 000000E3C1CFF888
//
//
//	printf("배열 두번째 요소의 주소 : %p\n", &ary[1]);
//	printf("배열 두번째 요소의 주소 :%p\n", ary + 1);  //000000E3C1CFF88C
//	printf("배열 세번째 요소의 주소 :%p\n", ary + 2);  //000000E3C1CFF890
//
//	return 0;
//}