//#include <stdio.h>
//
//
//struct profile {
//
//	int age;
//	double height;
//	double weight;
//
//
//};
//
//struct student {
//
//	struct profile pf;
//	int id;
//	double grade;
//
//};
//
//int main(void) {
//
//	struct student s;
//	s.pf.age = 19;
//	s.pf.height = 199.5;
//	s.pf.weight = 88.5;
//	s.grade = 96.9;
//	s.id = 202510110;
//
//	printf("키:%.1lf\n", s.pf.height);
//	printf("체중:%.1lf\n", s.pf.weight);
//	printf("나이:%d\n", s.pf.age);
//	printf("성적:%.1lf\n", s.grade);
//	printf("학번:%d\n", s.id);
//
//
//
//
//	return 0;
//}