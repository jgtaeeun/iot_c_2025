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
//	Addr list[3] = { {"ȫ�浿", 100,"010-1111-2222", "����"},{"��ö��",33,"010-6666-7777", "�λ� ����"},{"�迵��",24,"010-8888-7777","�λ� �λ�����"}};
//	
//	print_list(list);  //�迭�� �ּҸ� �Ѱ��ش�.
//
//	//for (int i = 0; i < 3; i++) {
//	//	printf("�̸�:%s ,����:%d, ��ȭ��ȣ:%s, �ּ�:%s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
//	//}
//	return 0;
//}
//
//void print_list(Addr* p) {
//	for (int i = 0; i < 3; i++) {
//		printf("�̸�:%s ,����:%d, ��ȭ��ȣ:%s, �ּ�:%s\n",p[i].name , p[i].age, p[i].tel, p[i].addr);
//	}
//}