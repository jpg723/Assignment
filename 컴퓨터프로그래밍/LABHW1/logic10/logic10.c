#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isSameArray(int a[], int b[], int aSize, int bSize) {

	if (aSize != bSize)
		return 0;
	
	else {
		for (int i = 0; aSize - 1; i++) {

			if (a[i] != b[i]) 
				return 0;
		}
	}

	return 1;
}
int main(void) {

	int A[5] = { 10, 20, 30, 40, 50 };
	int B[5] = { 10, 20, 30, 40, 50 };
	int asize, bsize;

	if (isSameArray(A, B, 5, 5))
		printf("같다.\n");

	else
		printf("다르다.\n");
}

