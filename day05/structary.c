//#include <stdio.h>
//
//
//typedef struct addr {
//
//	char name[100];
//	int age;
//	char tel[20];
//	char addr[100];
//
//}Addr;
//void print_list(Addr* );
//
//int main() {
//	Addr list[3] = { {"홍길동", 100,"010-1111-2222", "몰라"},{"김철수",33,"010-6666-7777", "부산 남구"},{"김영희",24,"010-8888-7777","부산 부산진구"}};
//	
//	print_list(list);  //배열의 주소를 넘겨준다.
//
//	//for (int i = 0; i < 3; i++) {
//	//	printf("이름:%s ,나이:%d, 전화번호:%s, 주소:%s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
//	//}
//	return 0;
//}
//
//void print_list(Addr* p) {
//	for (int i = 0; i < 3; i++) {
//		printf("이름:%s ,나이:%d, 전화번호:%s, 주소:%s\n",p[i].name , p[i].age, p[i].tel, p[i].addr);
//	}
//}