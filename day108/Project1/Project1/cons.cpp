//#define _CRT_SECURE_NO_WARNINGS
//#include <iostream>
//
//
//class Person {
//private:
//	char name[20];
//	int age;
//public :
//	Person(){}
//	Person(const char* name, int age) {
//		this->age = age;
//		strcpy(this->name, name);
//		std::cout << "생성자호출" << std::endl;
//	}
//	void view() {
//		std::cout << age << "," << name << std::endl;
//	}
//	~Person() {
//		std::cout << "소멸자호출" << std::endl;
//	}
//};
//
//
//int main()
//{
//	/*Person p;
//	p.view();*/
//	Person p1 = Person("홈런볼",20);
//	p1.view();
//
//	Person p2(p1); // 복사생성자 호출
//	p2.view();
//
//	Person p3 = p1;
//	p3.view();
//	return 0;
//}