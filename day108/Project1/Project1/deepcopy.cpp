//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//	
//private:
//	char* name;
//	int age;
//public :
//	Person(){}
//	Person(const char* a, int age ) {
//		this->age = age;
//		name = new char[strlen(a) + 1];
//		strncpy(name, a, strlen(a)+1);
//		std::cout << "������ȣ��" << std::endl;
//	}
//	Person(const Person& other) {
//		this->age = other.age;
//		name = new char[strlen(other.name) + 1];
//		strncpy(name, other.name, strlen(other.name) + 1);
//		std::cout << "���������ȣ��" << std::endl;
//	}
//	void view() {
//		std::cout << age << "," << name << std::endl;
//	}
//	~Person() {
//		std::cout << "�Ҹ���ȣ��" << std::endl;
//	}
//};
//
//
//int main()
//{
//
//	Person p = Person("����ġ��", 12);
//	Person pc(p);
//	return 0;
//}