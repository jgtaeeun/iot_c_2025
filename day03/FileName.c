#include <stdio.h>

int main() {

    int ary[5];
    int* p = ary;
    int* q;
    q = p + 3;
    printf("*q- *p = %d", q - p);

	return 0;
}

