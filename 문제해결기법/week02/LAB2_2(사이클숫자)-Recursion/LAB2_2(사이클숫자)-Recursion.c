#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int get_cycle_number(int n, int l) {

	printf("%d ", n);

	if (n == 1)
		return 1;

	if (n % 2 == 0)
		l += get_cycle_number(n / 2, l);

	else
		l += get_cycle_number(n * 3 + 1, l);

	return l;
}
int main(void) {

	int num, length = 1;

	scanf("%d", &num);

	length = get_cycle_number(num, length);
	printf("\n%d", length);
}