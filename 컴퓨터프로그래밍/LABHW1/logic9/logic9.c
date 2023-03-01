#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int A[5] = { 10, 20, 30, 40, 50 };
	int R[5];

	for (int i = 0; i < 5; i++) {

		R[i] = A[5 - i - 1];
		printf("%d ", R[i]);
	}

	printf("\n");

	return 0;
}