#include <stdio.h>

int main() {
	int ary[3] = { 1,2,3 };
	int (*p)[3] = ary;
	printf("ary[0]:%d\n", *p);
	printf("ary[1]:%d\n", p[1]);
	printf("ary[2]:%d\n", (*(p+2)));



	return 0;
}