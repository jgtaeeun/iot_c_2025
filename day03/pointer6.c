//#include <stdio.h>
//void printAry(int*, int);
//
//
//int main() {
//
//	int ary[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int ary2[] = { 1,2,3 };
//	
//	int c = sizeof(ary) / sizeof(ary[0]);
//	printAry(ary, c);
//	int c2 = sizeof(ary2) / sizeof(ary2[0]);
//	printAry(ary2, c2);
//	return 0;
//}
//
//
//void printAry(int * p, int c) {
//
//
//	for (int i = 0; i < c; i++) {
//		//printf("%d ", p[i]);  
//		printf("%d ", *(p+i)); 
//	}
//	printf("\n");
//}
