//#include <stdio.h>
//
//int main(void) {
//    char name[20];
//    int age;
//    
//    printf("당신의 나이를 입력하시오:");
//    scanf_s("%d", &age);                        //int형은 크기가 고정적이기에 크기지정 생략
//
//    printf("당신의 이름을 입력하시오:");
//    scanf_s("%s", name, sizeof(name));          //문자열은 가변길이이기에 sizeof(배열이름)으로 크기지정해줘야 함
//
//    printf("%s님의 만 나이는 %d입니다.", name, age - 2);
//    return 0;
//}