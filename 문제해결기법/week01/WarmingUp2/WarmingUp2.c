#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isPrime(int x) {
	int i;

	if (x == 1) //1은 소수에서 제외
		return 0;

	for (i = 2; i < x; i++) {
		
		if (x % i == 0) //소수가 아니면 (x외에 다른 수로 나눴을 때 나머지가 0이라면)
			return  0; //0을 반환
	}
	
	return 1; // 소수면 1을 반환
}
int main(void) {
	
	int i;

	for (i = 1; i <= 30; i++) { //1부터 30까지 소수 판별

		if (isPrime(i) == 1)
			printf("%d ", i);
	}

	return 0;
}