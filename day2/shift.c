
//#include <stdio.h>
//
//
//int main() {
//    char ch = 0x7f;                 // 0b   0111 1111
//    unsigned char uch = 0x7f;
//    printf("ch:%x, uch:%x, ch:%u, uch:%u\n", ch, uch, ch, uch);
//
//    char ch1 = 0x9f;                 // 0b   1001 1111
//    unsigned char uch1 = 0x9f;
//    printf("ch1:%x, uch1:%x\n", ch1, uch1); //ch1:ffffff9f, uch1:9f
//
//    ch1 >>= 1; //1111 1111 1111 1111 1111 1111 1100 1111
//    uch1 >>= 1;// 0100 1111
//
//    printf("ch1:%x, uch1:%x\n", ch1, uch1);  //ffffffcf, 4f
//    printf("ch1:%d, uch1:%d\n", ch1, uch1);  //-49 ,79
//    return 0;
//}
//
