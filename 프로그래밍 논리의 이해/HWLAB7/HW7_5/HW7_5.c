/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main(void) {

	int num, remain = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	while (num != 0) {

		remain = num % 2;
		num /= 2;
		printf("%d", remain);
	}

	return 0;
}