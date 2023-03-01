#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int digit(int n) {

	int cnt = 0;

	while (n != 0) {

		n = n / 10;
		cnt++;
	}

	return cnt;
}
int main(void) {

	int n = 0, i = 0, number = 0, d;

	scanf("%d", &n);

	while (1) {
		i += 3;

		d = digit(i);

		if (n - d <= 0)
			break;

		else
			n = n - d;
	}

	number = i;

	for (i = 0; i < d - n; i++) {
		number = number / 10;
	}

	printf("%d", number % 10);

	return 0;
}