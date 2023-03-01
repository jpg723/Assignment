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

	int num;

	scanf("%d", &num);

	printf("%d\n", solution(num));

	return 0;
}