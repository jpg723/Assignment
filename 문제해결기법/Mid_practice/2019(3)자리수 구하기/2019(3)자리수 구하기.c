#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int digit(int n){ 

	int cnt = 0;

	while (n != 0) {

		n = n / 10;
		cnt++;
	}

	return cnt;
}
int main(void) {

	int n = 0;
	
	scanf("%d", &n);

	printf("%d\n", digit(n));

	return 0;
}