#include <stdio.h>

int main()
{
	unsigned char uch = 0x7f;   //0b   0111  1111
	char ch = 0x7f;
	unsigned char uch1 = 0x9f;
	char ch1 = 0x9f;        //1001 1111

	printf("uch : %#x , ch : %#x \n" , uch, ch);
	printf("uch1 : %#x , ch1 : %#x \n", uch1, ch1);     

	unsigned char uch2 = 0x11f; //0001 0001 1111 => 1 0001 1111
	char ch2 = 0x11f;
	printf("uch2 : %#x , ch2 : %#x \n", uch2, ch2);       //0001 1111 1바이트만 저장됨
	 
	uch = uch << 1;
	ch = ch << 1;
	printf("uch<< 1 : %#x, ch<< 1 : %#x\n",uch,ch);

	uch1 = uch1  >> 1;    //1001 1111  ->0100 1111
	ch1 = ch1   >> 1;		//1001 1111 ->1100 1111
	printf("uch1>> 1 : %#x, ch1>> 1 : %#x\n", uch1, ch1);
	return 0; 
}