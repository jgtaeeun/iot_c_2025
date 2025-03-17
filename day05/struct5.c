//#include <stdio.h>
//
//typedef int int32mt;  // int 타입을 int32mt라는 이름으로 정의
//struct Human {
//
//	char name[100];
//	int32mt age;
//
//};
//
//typedef struct mystruct {
//	int a;
//	int b;
//
//}Mystruct;
//
//int main() {
//
//	struct Human h = { "정시현", 19 };
//	struct Human h1 = { "오봉자", 19 };
//	
//	//struct Human h = { "정시현",34 },
//	//			 h1 = { "오봉자", 34 };     //int a = 10, b=20;와 동일한 변수초기화 형태
//
//	printf("이름:%s, 나이:%d\n", h.name, h.age);
//	printf("이름:%s, 나이:%d\n", h1.name, h1.age);
//
//	Mystruct m;
//
//	return 0;
//}