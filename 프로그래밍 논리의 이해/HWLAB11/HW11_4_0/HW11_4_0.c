/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int num, prime = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 2; i < num; i++) {

		if (num % i == 0)
			prime = 1;
	}

	if (prime == 1)
		printf("소수가 아닙니다.\n");

	else
		printf("소수입니다.\n");

	return 0;
}