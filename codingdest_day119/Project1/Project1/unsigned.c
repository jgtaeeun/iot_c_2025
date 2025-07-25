//#include <stdio.h>
//
//int main()
//{
//
//	unsigned char uch = 0x7f; 
//	char ch = 0x7f;
//
//	printf("%#x ", uch);
//	printf("%#x\n", ch);
//	
//
//	unsigned char uch2 = 0x9f;
//	char ch2 = 0x9f;
//
//	printf("%#x ", uch2);
//	printf("%#x\n", ch2);
//
//
//	printf("%#x ", uch << 1);  //0111 1111 -> 1111 1110   fe
//	printf("%#x\n", uch >> 1); //0111 1111 -> 0011 1111    3f
//
//	printf("%#x ", ch << 1); //0111 1111 -> 1111 1110   fe
//	printf("%#x\n", ch >> 1); //0111 1111 -> 0011 1111   3f
//
//	printf("%#x ", uch2 << 1);  //1001 1111 -> 1 0011 1110 13e
//	printf("%#x\n", uch2 >> 1);    //1001 1111 -> 0100 1111 4f
//
//	printf("%#x ", ch2 << 1);   //1001 1111 -> 0011 1110 ffffff3e
//	printf("%#x\n", ch2 >> 1);      //1001 1111 -> 1100 1111 ffffffcf
//	return 0;
//}