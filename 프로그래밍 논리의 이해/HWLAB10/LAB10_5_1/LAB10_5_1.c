/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void print_divisor(int n);
int main(void) {

	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	print_divisor(num);

	return 0;
}
void print_divisor(int n) {


	for (int i = 1; i <= n; i++) {

		if (n % i == 0)
			printf("%d\n", i);
	}

	return;
}