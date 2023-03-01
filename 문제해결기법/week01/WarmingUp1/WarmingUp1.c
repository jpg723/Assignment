#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {
	int n, i = 0, result = 1;

	printf("Enter a number: ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {

		result *= 2; //2를 n번 곱해준다.
	}

	printf("%d\n", result);
}