#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int print(int n) {

	if (n == 0)
		return 0;

	print(n / 10);
	printf("%d ", n % 10);
}
int main(void) {

	int num;

	scanf("%d", &num);

	print(num * 9);

	return 0;
}