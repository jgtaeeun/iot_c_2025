//#include <stdio.h>
//
//void print_str(char **pts, int c);
//int main(void) {
//
//	char* ptr_ary[] = {"eager","tiger","lion","squirrel"};
//	int count;
//	//printf(" sizeof(ptr_ary): %d\n", sizeof(ptr_ary));  //32
//	//printf(" sizeof(ptr_ary[0]): %d\n", sizeof(ptr_ary[0]));  //8 포인터는 64비트 시스템에서 8바이트 크기를 가집니다.
//	count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
//	print_str(ptr_ary, count);
//	return 0;
//}
//
//void print_str(char** pts, int c){
//	int i;
//	for (i = 0; i < c; i++) {
//		printf("%s\n", pts[i]);
//	}
//}
