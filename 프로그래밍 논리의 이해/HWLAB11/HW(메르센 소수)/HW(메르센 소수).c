/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//2 의 n 승을 반환하는 함수
long long twoToThePower(int n)
{
	long long pow = 1;

	for (int i = 0; i < n; i++)
		pow *= 2;

	return pow - 1;
}
// x 가 소수이면 1 을 아니면 0 을 반환하는 함수
int isPrime(long long x)
{
	int prime = 0;

	for (int i = 2; i < x; i++) {

		if (x % i == 0) {
			prime = 1;
			break;
		}
	}

	return prime;
}
int main(void)
{
	int num, prime = 0;

	printf("Enter a number: ");
	scanf("%d", &num);

	for (int i = 2; i < num; i++) {

		if (isPrime(i) == 0) { //소수 판별

			if(isPrime(twoToThePower(i)) == 0) //2의 n승 - 1이 소수인지 판별
			printf("(%d ^ %d - 1) = %d은 메르센 소수이다.\n", 2, i, twoToThePower(i));
		}
	}
}