#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int solution(int n) { 

	int ret = 0;

	while (n != 0) {
		n = n / 10;
		ret++;
	}
	return ret;
}
int main(void) {

	int n, i, m, number;

	scanf("%d", &n);

	for (i = 3; ; i = i + 3) { //i는 3씩 무한 증가
		m = solution(i); //i의 자리수

		if (n - m <= 0) {
			break;
		}
		else {
			n = n - m;
		}
	}

	number = i;

	for (i = 0; i < m - n; i++) { 
		number = number / 10;
	}

	printf("%d\n", number % 10);

	return 0;
}