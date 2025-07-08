//#include <stdio.h>
//void function();
//int main()
//{
//	int b;
//	static int c;
//	const int d = 10; //상수화는 초기화 필수!!
//	
//
//	
//	const int* pr = &b;
//	//*pb = 12;
//	b = 12;
//	printf("%d\n", b);
//
//	int* pr2 = &b;
//	*pr2 = 14;
//	printf("%d\n", b);
//
//
//	char arr[20] = "Hi";
//
//
//	int c1 = 200;
//	int d1 = 100;
//	int* const pc = &c1;
//	* pc = 40;
//	function();
//	
//	printf("function(): %p\n", &function);
//	printf("local b: %p\n", &b);
//	printf("static c: %p\n", &c);
//	printf("const  d: %p\n", &d);
//	printf("arr : %p\n", &arr);
//	return 0;
//}
//void function()
//{
//
//	printf("function()주소 확인위한 함수입니다.\n");
//}