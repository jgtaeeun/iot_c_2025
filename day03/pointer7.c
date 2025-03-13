//#include <stdio.h>
//
//
//
//int main(void) {
//
//	//const int num = 10;
//	////const변수는 직접변경 불가 num = 20;
//	//
//	//int* num1 = &num;
//	//*num1 = 30;
//	//printf("포인터로 값 변경한 num :%d\n", num);
//
//
//	//int num2 = 20;
//	//num2 = 10;
//	//
//	//int* pnum2 = &num2;
//	//*pnum2 = 30;
//	//printf("포인터로 값 변경한 num2 :%d\n", num2);
//
//
//	int num4 = 5, num5 = 10;
//	
//	const int* pn2 = &num4;			//데이터상수 
//									
//	
//	//*pn2 = 100;	 포인터변수를 통한 데이터의 변경을 불허한다./포인터 자체는 변경 가능합니다.
//	num4 = 100;
//	pn2 = &num4;
//	printf("* pn2 :%d\n", *pn2);
//
//	
//	num4 = 5;
//	int* const pnum3 = &num5;			//포인터 상수
//	//pnum3 = &num4;  // 포인트변수가 가리키는 주소의 변경을 불허한다.
//	*pnum3 = num4;
//	
//	printf("* pnum3 :%d\n", *pnum3);
//	return 0;
//
//	const int* const pnum4 = &num5;  //데이터 상수와 포인터 상수가 결합된 형태
//	//pnum4 = &num4;   //포인터상수
//	//*pnum4 = 200;   //데이터상수
//
//
//}

