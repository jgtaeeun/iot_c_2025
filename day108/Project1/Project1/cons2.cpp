//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//class Person {
//	
//private:
//	char name[20];
//	int age;
//public :
//	Person(){}
//	Person(const char* name, int age ) {
//		this->age = age;
//		strncpy(this->name, name , strlen(name)+1);
//		std::cout << "������ȣ��" << std::endl;
//	}
//	Person(const Person& other) {
//		this->age = other.age;
//		strcpy(this->name, other.name);
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
//	//char c[4] = "abc";
//	/*c[0] = 'a';
//	c[1] = 'b';
//	c[2] = '\0';*/
//
//	//std::cout << c << std::endl;
//
//	Person p = Person("����", 12);
//	Person pc(p);
//	return 0;
//}