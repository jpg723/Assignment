#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int show(int n) {

	if (n == 0)
		return;

	show(n / 10);
	printf("%d ", n % 10);
	return 0;

}
int main(void) {

	int num, mul;

	scanf("%d", &num);

	mul = num * 9;
	show(mul);

	return 0;
}