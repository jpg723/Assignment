/*컴퓨터학과 20200997 이미지*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int isPrime(int num);
int main(void) {

	int num;

	while(1) { //무한 반복

		printf("Enter a number(-1 for exit): ");
		scanf("%d", &num); //num 입력

		if (num == -1) //-1입력시 종료
			break;

		if (isPrime(num) == 0) //반환값이 0이라면 소수
			printf("소수입니다.\n");

		else //반환값이 1이라면 소수X
			printf("소수가 아닙니다.\n");

	}

	return 0;
}

int isPrime(int num) {

	int prime = 0; 

	for (int i = 2; i < num; i++) {
		
		if (num % i == 0) {
			prime = 1; //소수가 아니라면
			break;
		}
	}

	return prime;
}