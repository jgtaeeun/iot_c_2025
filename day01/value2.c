//#include <stdio.h>
//
//int  main() {
//	//ch는 1바이트 , 2의 8승이니 256개 저장 가능
//	signed char ch = 0; // -128~127
//	unsigned char ch2 = 0; //0~255
//
//	unsigned int num;	
//	num = 123456;
//	printf("num:%d\n", num);
//	num = -1;
//	printf("num:%d\n", num);	//num이 양수만 저장한다고 했는데 -1이 나오는 것은 잘못된 것이다.
//	printf("num:%u\n", num);
//	
//	return  0;
//    
//}