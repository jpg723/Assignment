#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void random(int n) {

	srand(time(0));

	for (int i = 0; i < 6; i++) {
		n = rand() % 45 + 1; //1부터 45까지 랜덤 함수 생성
		printf("%d ", n);
	}
}

int main(void) {

	char answer;
	int num = 0, i;

	printf("*** 로또 번호 생성기 ***");

	do {

		printf("\n생성 번호: ");
		random(num);

		printf("\n다시 생성하겠습니까? (y/n): ");
		scanf(" %c", &answer);

	} while (answer != 'n'); //answer가 n이면 종료
	
}